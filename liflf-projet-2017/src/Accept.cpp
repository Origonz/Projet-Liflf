//******************************************************************************

#include <iostream>
#include <algorithm>

#include "Accept.h"
#include "FA_tools.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////////

bool EstDeterministe(const sAutoNDE& at){

    for (trans_t::const_iterator i = at.trans.begin(); i != at.trans.end(); i++) {
        for (vector<etatset_t>::const_iterator j = (*i).begin(); j != (*i).end(); j++) {
            if((*j).size() > 1) return false;
        }
    }
    return true;
}

////////////////////////////////////////////////////////////////////////////////

void Fermeture(const sAutoNDE& at, etatset_t& e) {
    etatset_t temp;
    for (etatset_t::const_iterator i = e.begin(); i != e.end(); i++) {
        temp.insert((*i));
        for(etatset_t::const_iterator j = at.epsilon[(*i)].begin(); j != at.epsilon[(*i)].end(); j++) {
            temp.insert(*j);
        }
    }
    e = temp;
}
////////////////////////////////////////////////////////////////////////////////

etatset_t Delta(const sAutoNDE& at, const etatset_t& e, symb_t c){
    etatset_t res;
    for (etatset_t::const_iterator i = e.begin(); i != e.end(); i++) {
        for (etatset_t::const_iterator j = at.trans[c-97][(*i)].begin(); j != at.trans[c-97][(*i)].end(); j++) {
            res.insert(*j);
        }
    }
    return res;
}

////////////////////////////////////////////////////////////////////////////////

bool Accept(const sAutoNDE& at, std::string str){

    etatset_t tmp;
    tmp.insert(at.initial);
    for(string::const_iterator it = str.begin(); it != str.end(); it++) {
        tmp = Delta(at, tmp, *it);
    }
    set<etat_t>::const_iterator first1 = at.finaux.begin();
    set<etat_t>::const_iterator last1 = at.finaux.end();
    set<etat_t>::const_iterator first2 = tmp.begin();
    set<etat_t>::const_iterator last2 = tmp.end();

    while ((first1!=last1) && (first2!=last2)) {
        if (*first1<*first2) first1++;
        else if (*first2<*first1) first2++;
        else return true;
    }
    return false;
}

//******************************************************************************

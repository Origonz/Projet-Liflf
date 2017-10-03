//******************************************************************************

#include <iostream>
#include <algorithm>

#include "Accept.h"
#include "FA_tools.h"

////////////////////////////////////////////////////////////////////////////////

bool EstDeterministe(const sAutoNDE& at){
  //TODO définir cette fonction

  return true;
}

////////////////////////////////////////////////////////////////////////////////

void Fermeture(const sAutoNDE& at, etatset_t& e){
  //TODO définir cette fonction

}

////////////////////////////////////////////////////////////////////////////////

etatset_t Delta(const sAutoNDE& at, const etatset_t& e, symb_t c){
  //TODO définir cette fonction

  etatset_t r;

  return r;
}

////////////////////////////////////////////////////////////////////////////////

bool Accept(const sAutoNDE& at, std::string str){
  //TODO définir cette fonction
	if(str.length()= 0){ // si on veut lire le mot vide
      if(finaux.find(initial)!= finaux.end()){ // si l'état initial est aussi un état final
        return true; // le mot vide est accepté
      }
    }

  for(int i = 0; i < trans.size(); i++){ // parcours des état de l'automate
    for(int j = 0; j < trans.size(); j++){ // parcours des index de transitions
      if(trans[i][str.back()][j] != NULL && finaux.find(trans.at(i))!= finaux.end()){
       // test si la transition existe avec le caractere de la chaine et si état état final
        return true;
      }else return false;
    }

  }
  return false;
	}

//******************************************************************************

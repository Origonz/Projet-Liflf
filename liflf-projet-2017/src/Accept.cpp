//******************************************************************************

#include <iostream>
#include <algorithm>

#include "Accept.h"
#include "FA_tools.h"

////////////////////////////////////////////////////////////////////////////////

bool EstDeterministe(const sAutoNDE& at){
  //TODO définir cette fonction
	bool doublon = false;
	
	for(int i=0;i<trans.size();i++){
			if(trans.at(i)==NULL || trans.at(i).size()!=1){ //si la case contient un veteur de taille 1 ou si la case est NULL
				return false;
		}
	}
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

  return false;
}

//******************************************************************************

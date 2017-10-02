//******************************************************************************

#include <iostream>
#include <algorithm>

#include "Accept.h"
#include "FA_tools.h"

////////////////////////////////////////////////////////////////////////////////

bool EstDeterministe(const sAutoNDE& at){
  //TODO définir cette fonction
	bool doublon = false;
	int tab[nb_symbs];
	
	for(int i=0;i<trans.size();i++){
		
		for(int i=0;i<nb_symbs;i++){ //on vide le tableau
		tab[i]=0;
		}
		
		for(int j=0;j<trans.at(i).size();j++){
			
			if(trans.at(i)==NULL || trans.at(i).size()==0){ //si ne case ne contient pas de vecteur ou un vecteur vide
				return false;
			}
			
			for(int k=0;i<trans.at(i).at(j).size;k++){
				
				if(tab[trans.at(i).at(j).at(k)]!=0){ //si on a un doublon
					return false;
				}
				
				tab[trans.at(i).at(j).at(k)]++; //Quand on trouve un etat auquel on peut accédé, on l'incremente dans le tableau
			}
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

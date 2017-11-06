//******************************************************************************

#include "ToGraph.h"

////////////////////////////////////////////////////////////////////////////////

bool ToGraph(sAutoNDE& at, std::string path){
  //TODO définir cette fonction
    ofstream objetfichier;
    objetfichier.open("path", ios::out);
    if (objetfichier.bad()) //permet de tester si le fichier s'est ouvert sans probleme
        return 1;
    string contenu,a="",b="";
    for(int i=0;i<at.finaux.size;i++){
        a+=at.finaux.at(i)+" ";
    }

    for(int i=0;i<at.trans.size;i++){
        b+= at.trans.at(i).at(0)+' -> '+at.trans.at(i).at(2)+' [label = "'+at.trans.at(i).at(1)+'"];\n';
    }

    contenu = 'digraph finite_state_machine {
	        rankdir=LR;
	        size="10,10"

	        node [shape = doublecircle];'+a+' ;
	        node [shape = point ]; q;
	        node [shape = circle];

	        q -> '+at.initial+';
	
            '+b+'
        }';
    
    objetfichier <<contenu << endl;
    objetfichier.close(); //on ferme le fichier pour liberer la mémoire 
    return true;
}

//******************************************************************************

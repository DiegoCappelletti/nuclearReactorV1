using namespace std;

#include "login.h"

#include <iostream>
#include <string>
#include <stdio.h>

#define CLS system("clear");

void LogIn(){
  
  string id = "", pass = "";

  do{
    CLS
	
      cout<<"\n\nInserire il nome utente:\n\n\n";
    cout<<"==> ";
    getline(cin,id);
	
    if(id==ID1)
      break;
    if(id==ID2)
      lolid1();
    if(id==ID3)
      lolid2();
    if(id==ID4)
      lolid3();
	
  }while(true);
	
  do{
    CLS
	
      cout<<"\n\nInserire la password:\n\n\n";
    cout<<"==> ";
    getline(cin,pass);
    
  }while(!(pass==PASSWORD));
	
}

void lolid1(){
  CLS
    
    cout<<"\n\n\n\nIl presidente non ti ha incaricata per questo lavoro, soldato sempice Romanov.\nTorna a sottrare preziose informazioni ai sporchi capitalisti che minacciano la\nstabilità del nostro amato paese.\nGloria ad Arstotzka!\n\n\"da rileggere con un fiero accento russo\"";
  getchar();
}

void lolid2(){
  CLS

    char a;
  cout<<"\n\n\n\nSicuro della tua riscosta? L\'accendiamo?\n\n[INVIO]";
  getchar();
  cout<<"\n\n\n\nBene controlliamo se la tua risposta è esatta per 1 milione si euro!!\n\nTAATAANTATATANTATATATATATATAAAAAAAAAAAN\n\nMi spiace non hai vinto, ritenta domani.";
  getchar();
}

void lolid3(){
  CLS
    
    cout<<"\n\n\n\nHomer, quante volte bisogna dirtelo che non puoi accedere al sistema? Di sicuro non dopo che hai rovesciato il caffè inzuppando una ciambella rischiando di provocare \ncosì un disastro nucleare... Torna a NON fare le tue mansioni.";
  getchar();
}

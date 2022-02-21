using namespace std;

#include "home.h"

#include <iostream>
#include <stdio.h>
#include <string>

#define CLS system("clear");

string str;

void Home(){
	
	do{
	  CLS
	    cout<<"\n------------------------------- VALLELAGHI ENERGY PRODUCT ------------------------------\n"<<endl;
	  cout<<"\t\n\nDigitare un'opzione e premere invio:\n"<<endl;
	  cout<<"\t1. Log In\n"<<endl;
	  cout<<"\t2. Spegnimento Centrale\n"<<endl;
	  cout<<"\t3. Exit\n\n\n\n\n"<<endl;
	  cout<<"Licenza sul materiale - Prprietà di VEP"<<endl;
	  cout<<"199738070-TN (C) Copyright GGTerlago 2018, 2019 - Tutti i diritti riservati."<<endl;
	  cout<<"----------------------------------------------------------------------------------------\n\n\n\n"<<endl;
	  cout<<"====> ";
	
	  getline(cin,str);

	  if(str.compare("1") == 0)
	    break;
	  if(str.compare("2") == 0)
	    lol1();
	  if(str.compare("3") == 0)
	    lol2();
		
	}while(true);
}


void lol1(){
	CLS
	cout<<"\n\n\nCredevi fosse cosi smplice\?\nDevi fare Log in per spegnere la centrale. -_-"<<endl;
	getchar();
}

void lol2(){
	CLS
	cout<<"\n\n\nSei serio\?!\?!\n\nLa centrale sta per esplodere!!!!!\nTorna indietro e fai il tuo lavoro."<<endl;
	getchar();
}

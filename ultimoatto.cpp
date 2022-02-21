using namespace std;

#include "ultimoatto.h"

#include <iostream>
#include <string>
#include <stdio.h>

#define CLS system("clear");

string  str4, risposta, proto;
bool sicurezza = false,  codProtocollo = false;
//bool fine = false;

void ultimoAtto(){
  do{
    CLS
       cout<<"\n----------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\n\n\tScegliere un'opzione e premere invio.\n\n";
    cout<<"\t1. Rispondere alla domanda di sicurezza.\n";
    cout<<"\t2. Attivare il protocollo d'evaquazione.\n";
    cout<<"\t3. Spegnere la centrale.\n";
    cout<<"\t4. Torna indietro\n\n\n\n";
    cout<<"\t===> ";
    
    getline(cin,str4);

    if(str4.compare("1")==0)
      domandaSicurezza();
    if(str4.compare("2")==0)
      attivazioneProtocollo();
    if(str4.compare("3")==0)
      spegnimento();
    if(str4.compare("4")==0)
      break;
    
  }while(true);
}

void domandaSicurezza(){
  CLS
    cout<<"\n\n\tDomanda di sicurezza:";
  cout<<"\n\n\tQuante ciambelle ha mangiato Homer l\'8 agosto?\n\n\t";

  getline(cin,risposta);

  if(risposta.compare("19")==0){
    sicurezza=true;
    cout<<"\n\n\tRisposta corretta.\n\n\t";
    getchar();
  }else{
    cout<<"\n\n\tRisposta sbagliata.\n\n\t";
    getchar();
  }
}

void attivazioneProtocollo(){
  CLS
    cout<<"\n\n\tPer attivare il protocollo di sicurezza,\n\timmetere il numero di protocollo presente sull\'orario:";
  cout<<"\n\n\t===>";

  getline(cin,proto);

  if(proto.compare("8349")==0){  //codice protocolo
    codProtocollo=true;
    cout<<"\n\n\tCodice corretto.\n\n\t";
    getchar();

    CLS
    cout<<"\n\n\tAttivazione allarme anti incendio.\n\n\t";
    getchar();

    CLS
    cout<<"\n\n\tAccensione sistema di ricircolo aria.\n\n\t";
    getchar();

    CLS
    cout<<"\n\n\tAttivazione il sistema di scarico scorie nucleari\n\tnel lago di S.Massenza.\n\n\t";
    getchar();

    CLS
    cout<<"\n\n\tEvaquazione dirigenti.\n\n\t";
    getchar();

    CLS
    cout<<"\n\n\tEvaquazione personale.\n\n\t";
    getchar();

    CLS
    cout<<"\n\n\tSi è verificato un problema,\n\tl\'evaquazione del personale non verrà messa in atto.";
    getchar();

    CLS
    cout<<"\n\n\tProtocollo di evaquazione attivato.\n\n\t";
    getchar();
    
  }else{
    cout<<"\n\n\tCodice errato.\n\n\t";
    getchar();
  }
}

void spegnimento(){
  if((sicurezza==true)&&(codProtocollo==true)){   // Fine Gioco
    system("clean");
      cout<<"\n------------------------------- VALLELAGHI ENERGY PRODUCT ------------------------------\n"<<endl;
    cout<<"\n\n\tCongratulazioni!!!!!!\n"<<endl;
    cout<<"\tSiete riusciti a spegnere la centrale e salvato la nostra\n\tamata valle da un disastro nucleare\n"<<endl;
    cout<<"\tProbabilemente avete perso il lavoro, causato una fuga di radiazioni,\n\tfatto saltare ogni dispositivo elettrico nel raggio di chilometri.\n"<<endl;
    cout<<"\tPerò questo non conta ;)\n\n\n"<<endl;
    cout<<"\tTutto il Gruppo Giovani di Terlago spera di avervi\n\tintrattenuto in questa stravagante esperienza!"<<endl;
    cout<<"\n\n\n\n\nLicenza sul materiale - Prprietà di VEP"<<endl;
    cout<<"199738070-TN (C) Copyright GGTerlago 2018, 2019 - Tutti i diritti riservati."<<endl;
    cout<<"----------------------------------------------------------------------------------------\n"<<endl;
    exit(0);
  }else{
    CLS
      cout<<"\n\n\t Bisogna prima rispondere alla domanda di sicurezza e\n\t attivare il protocollo antincendio.\n\n\t";
    getchar();

    //fine = true;
  }
}

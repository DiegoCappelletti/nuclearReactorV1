using namespace std;

#include "paginainiziale.h"
#include "mansioniordinarie.h"

#include <iostream>
#include <string>
#include <stdio.h>

#define CLS system("clear");

string str1, email, nota;
bool cManuale = false, cAutomatico = false;

void PaginaIniziale(){
  
  do{
    CLS
      cout<<"\n-------------------------------- BENVENUTO STEVEN OLSSEN -------------------------------\n"<<endl;
    cout<<"\n\n\tScegliere un'opzione e premere invio.\n\n";
    cout<<"\t1. Mansioni odierne\n";
    cout<<"\t2. Nuclear-mail\n";
    cout<<"\t3. Note\n";
    cout<<"\t4. Exit\n\n\n\n";
    cout<<"\t===> ";

    getline(cin,str1);

    if(str1.compare("1")==0)
      MansioniOdierne(cManuale,cAutomatico);
    if(str1.compare("2")==0)
      nuclearMail();
    if(str1.compare("3")==0)
      note();
    if(str1.compare("4")==0)
      exit_();
      
  }while(true);
}

//-----------email------------
void nuclearMail(){
  do{
    CLS
    cout<<"-------------------------------------- NUCLEAR-MAIL ------------------------------------\n\n"<<endl;
    cout<<"\t  N°              OGGETTO                      DESTINATARIO\n";
    cout<<"\t ______________________________________________________________________\n";
    cout<<"\t|   |                               |                                  |\n";
    cout<<"\t| 1 | Chi ha sporcato il bagno?     | @tutti                           |\n";
    cout<<"\t|___|_______________________________|__________________________________|\n";
    cout<<"\t|   |                               |                                  |\n";
    cout<<"\t| 2 | Cambio codice                 | steven.olsson@n-mail.vez         |\n";
    cout<<"\t|___|_______________________________|__________________________________|\n";
    cout<<"\t|   |                               |                                  |\n";
    cout<<"\t| 3 | Ordine Siberia.com            | steven@gmail.com                 |\n";
    cout<<"\t|___|_______________________________|__________________________________|\n";
    cout<<"\t|   |                               |                                  |\n";
    cout<<"\t| 4 | Festa a sorpresa              | @tutti                           |\n";
    cout<<"\t|___|_______________________________|__________________________________|\n";

    cout<<"\n\n\tDigitare il numero dell\'email da leggere e premere [INVIO]:\n\tDigitare 0 per tornare indietro.\n\n";
    cout<<"\t===> ";
    getline(cin,email);
  

    if(email.compare("0")==0)
      break;
    if(email.compare("1")==0)
      email1();
    if(email.compare("2")==0)
      email2();
    if(email.compare("3")==0)
      email3();
    if(email.compare("4")==0)
      email4();

  }while(true);
}

void email1(){ //sporcato il bagno
    CLS
      cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
    cout<<"\t  da: risorse.umane@n-mail.vez            a: @tutti\n ";
    cout<<"\t ______________________________________________________________________\n";
    cout<<"\t|                                                                      |\n";
    cout<<"\t| Invitiamo gentilmente chiunque abbia usato il bagno n°3 al 4° piano  |\n";
    cout<<"\t|                                                                      |\n";
    cout<<"\t| il giorno 30 agosto 2019, a presentarsi presso l\'ufficio delle       |\n";
    cout<<"\t|                                                                      |\n";
    cout<<"\t| risorse umane per rispondere del fatto che quando si producono più   |\n";
    cout<<"\t|                                                                      |\n";
    cout<<"\t| scorie del reattore 3 sarebbe gradito che venga tirata l\'acqua.      |\n";
    cout<<"\t|______________________________________________________________________|\n";

    cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
    getchar();
}

void email2(){// cambio codice
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t  da: uff.tecnico@n-mail.vez            a: steven.olsen@n-mail.vez\n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| Il nuovo codice per accedere al reattore 3 è quessto:                |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|   1234                                                               |\n";                //codice
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void email3(){// ordine siberia.com
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t  da: conferma-ordine@siberia.taiwan        a: steven@gmail.com\n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| Gentile signore, la informiamo che abbiamo spedito i suoi articoli.  |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| Il suo pacco arriverà in 14843 giorni lavorativi.                    |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| La ringraziamo di aver usato il nostro sito per i suoi aquisti.      |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| Dettaglio ordine:                                                    |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|    - Mutandine con pizzo nere taglia XXL          x7  EUR 19,99      |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|    - Pelliccia copripollice in pettirosso             EUR 73,45      |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|    - Dizionario Mandarino-Ghanese per esperti         EUR  3,89      |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void email4(){// festa a sorpresa
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t  da: pierfranco@n-nuke.vez            a: @tutti\n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| Ricordo che prossimo lunedì è il compleanno di Ivan il giardiniere.  |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| La festa a sorpresa si terrà quel giorno dopo il turno del           |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| pomeriggio alle 1:30.                                                |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t| Mi raccomando, massima segretezza!                                   |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

//----------------note-------------
void note(){
    do{
      CLS
      cout<<"------------------------------------------ NOTE ---------------------------------------\n\n"<<endl;
      cout<<"\t  N°                       NOTA                     \n";
      cout<<"\t ______________________________________________________________________\n";
      cout<<"\t|   |                                                                  |\n";
      cout<<"\t| 1 | Nota 1                                                           |\n";
      cout<<"\t|___|__________________________________________________________________|\n";
      cout<<"\t|   |                                                                  |\n";
      cout<<"\t| 2 | Nota 2                                                           |\n";
      cout<<"\t|___|__________________________________________________________________|\n";
      cout<<"\t|   |                                                                  |\n";
      cout<<"\t| 3 | Nota 3                                                           |\n";
      cout<<"\t|___|__________________________________________________________________|\n";
      cout<<"\t|   |                                                                  |\n";
      cout<<"\t| 4 | Nota 4                                                           |\n";
      cout<<"\t|___|__________________________________________________________________|\n";
      cout<<"\t|   |                                                                  |\n";
      cout<<"\t| 5 | Nota 5                                                           |\n";
      cout<<"\t|___|__________________________________________________________________|\n";

      cout<<"\n\n\tDigitare il numero dell\'email da leggere e premere [INVIO]:\n\tDigitare 0 per tornare indietro.\n\n";
      cout<<"\t===> ";
      getline(cin,nota);
  

      if(nota.compare("0")==0)
	break;
      if(nota.compare("1")==0)
	nota1();
      if(nota.compare("2")==0)
	nota2();
      if(nota.compare("3")==0)
	nota3();
      if(nota.compare("4")==0)
	nota4();
      if(nota.compare("5")==0)
	nota5();
      
  }while(true);
}

void nota1(){
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t    15/08/19 \n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  La signorina Romanov è alquanto sospetta.                           |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Questa mattina mi ha chiesto domande molto insistenti               |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  riguardo la mia famiglia e le mie risposte le annotava sul suo      |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  taquino rosso.                                                      |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void nota2(){
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t   08/08/19 \n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Continuo a pesare di essere l'unico che lavora in quasta centrale.  |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  La russa continua tutti i giorni a parlare al telefono nella sua    |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  lingua che non ci scpisce niente. Il giapponese se ne sta nel suo   |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  ufficio notte e giorno. L'italiano è gia tanto che arrivi per le    |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  12:30. Homer oggi ha mangiato 19 ciambelle.                         |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void nota3(){
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t    26/08/19\n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Oggi Homer è riuscito a mangiare 28 ciambelle in meno di un\'ora     |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Non smette mai di stupirmi.                                         |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void nota4(){
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t    02/05/18\n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Da conprare:                                                        |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  -Pane               -Salame              -Bondola                   |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  -Uova               -Patate              -Prosecco                  |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  -Caramelle Rossana  -Formai                                         |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void nota5(){
  CLS
    cout<<"----------------------------------------------------------------------------------------\n\n"<<endl;
  cout<<"\t   16/06/19\n ";
  cout<<"\t ______________________________________________________________________\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Non mi convince il nuovo staggista proveniente dal giappone.        |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  L\'ho visto usare una calcolatrice!!!                                |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Esistono le calcolatrici in giappone? Non fanno i calcoli a mente?  |\n";
  cout<<"\t|                                                                      |\n";
  cout<<"\t|  Homer ha mangiato 12 ciambelle questa mattina.                      |\n";
  cout<<"\t|______________________________________________________________________|\n";

  cout<<"\n\n\tPer tornare alla lista delle mail digitare 1.\n\t";
    
  getchar();
}

void exit_(){
  CLS
    cout<<"\n\n\tMi spiace, ormai sei all'interno del sistema.\n\tPer uscirne dovrai dimostrare di essere il prescelto Neo...\n\tForse abbiamo sbagliato copione...\n\tComunque non puoi uscire.";
  getchar();
}

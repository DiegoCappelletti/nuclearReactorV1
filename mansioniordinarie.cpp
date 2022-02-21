using namespace std;

#include "mansioniordinarie.h"
#include "ultimoatto.h"

#include <iostream>
#include <string>
#include <stdio.h>

#define CLS system("clear");

string str2, str3, codice;
bool * manual;
bool * cAuto;

void MansioniOdierne(bool & cM,bool & cA){
  manual = &cM;
  cAuto = &cA;
  do{
    CLS
      cout<<"\n---------------------------------- MANSIONI ORDINARIE ----------------------------------\n"<<endl;
    cout<<"\n\n\tScegliere un'opzione e premere invio.\n\n";
    cout<<"\t1. Orari\n";
    cout<<"\t2. Controllo automatico\n";
    cout<<"\t3. Controllo manuale\n";
    cout<<"\t4. Torna indietro\n\n\n\n";
    cout<<"\t===> ";
    
    getline(cin,str2);

    if(str2.compare("1")==0)
      orari();
    if(str2.compare("2")==0)
      controlloAutomatico();
    if(str2.compare("3")==0)
      controlloManuale();
    if(str2.compare("4")==0)
      break;
    
  }while(true);
}

void orari(){
    CLS
    cout<<"------------------------------------------ ORARI ---------------------------------------\n\n"<<endl;
    cout<<"\t                     MANSIONE                       ORARIO    CODICE \n";
    cout<<"\t ______________________________________________________________________\n";
    cout<<"\t|                                                |          |          |\n";
    cout<<"\t| LogIn                                          |  08:30   |   001    |\n";
    cout<<"\t|________________________________________________|__________|__________|\n";
    cout<<"\t|                                                |          |          |\n";
    cout<<"\t| Cntrollo orari,mail e note odierne             |  08:45   |   012    |\n";
    cout<<"\t|________________________________________________|__________|__________|\n";
    cout<<"\t|                                                |          |          |\n";
    cout<<"\t| Riposizionamento barre plutonio reattore 3     |  09:30   |   950    |\n";
    cout<<"\t|________________________________________________|__________|__________|\n";
    cout<<"\t|                                                |          |          |\n";
    cout<<"\t| Passare a controllo manuale                    |  09:35   |   618    |\n";
    cout<<"\t|________________________________________________|__________|__________|\n";
    cout<<"\t|                                                |          |          |\n";
    cout<<"\t| Attivare protocollo n°8349 di evaquazione      |  11:57   |   444    |\n";
    cout<<"\t|________________________________________________|__________|__________|\n";
    cout<<"\t|                                                |          |          |\n";
    cout<<"\t| Spegnere la centrale                           |  12:30   |   000    |\n";
    cout<<"\t|________________________________________________|__________|__________|\n";
  
    cout<<"\n\tPremere [INVIO] per tornare indietro.\n\n";
    cout<<"\t===> ";
    getchar();
}

void controlloAutomatico(){
  do{
  CLS
    cout<<"\n\n\t1. Accensione controllo automantico.";
  cout<<"\n\t2. Spegnimento controllo automantico.";
  cout<<"\n\t3. Torna indietro.";
  cout<<"\n\n\n\t===>";
  getline(cin,str3);

  if(str3.compare("1")==0){
    if((*cAuto)==0){
    CLS
      cout<<"\n\n\tIl controllo automatico è già attivo.\n\t";
    getchar();
    }else{
      CLS
	cout<<"\n\n\tNon serve attivare il controllo automatico.\n\t";
      getchar();
    }
  }
  if(str3.compare("2")==0){

    if((*manual)==1){ // controllo manuale acceso e automatico spento
      CLS
	cout<<"\n\n\tIl controllo automatico è già spento.\n\n";
	      getchar();
    }else if((*cAuto)==false){ // controllo manuale spento e automatico spento
	CLS
	  cout<<"\n\n  Per poter spegnere il controllo automanico esegui la procedura spiegata\n  di seguito. Per mandare avanti premere [INVIO]";
	getchar();

    //passo 1
    CLS
      cout<<"\n\n-Aprire la valvola del liquido refrigerante.\n\n";

    cout<<"  |__"<<endl;
    cout<<"  |__"<<endl;
    cout<<"  |__"<<endl;
    cout<<"  |"<<endl;
    cout<<(char)126<<(char)126<<"O" <<(char)126<<(char)126<<(char)126<<endl;
    cout<<(char)126<<(char)126<<(char)126<<(char)126<<(char)126<<(char)126<<endl;

    getchar();
    
    //passo 2
    CLS
      cout<<"\n\n-Portare la posizione delle barre di plutonio dal 100% al 60%.\n\n";

    cout<<"  _______"<<endl;
    cout<<"-|       |-"<<endl;;
    cout<<" | | | | |"<<endl;
    cout<<" | | | | |"<<endl;
    cout<<" |||||||||"<<endl;
    cout<<" || | | ||"<<endl;
    cout<<" || | | ||"<<endl;
    cout<<"-|_______|-"<<endl;

    getchar();
    
    //passo 3
    CLS
      cout<<"\n\n-Diminuire la temperatura a 60 °C.\n\n";

    cout<<"  -|"<<endl;
    cout<<"  -|"<<endl;
    cout<<"  -|"<<endl;
    cout<<"  -|"<<endl;
    cout<<"   O"<<endl;

    getchar();
    
    //passo 4
    CLS
      cout<<"\n\n-Ridurre la potenza a 3000 MW.\n\n";
    
    getchar();
    
    //passo 5
    CLS
      cout<<"\n\n-Portare la posizione delle barre di plutonio dal 60% al 40%.\n\n";

    cout<<"  _______"<<endl;
    cout<<"-|       |-"<<endl;;
    cout<<" | | | | |"<<endl;
    cout<<" | | | | |"<<endl;
    cout<<" |||||||||"<<endl;
    cout<<" || | | ||"<<endl;
    cout<<" || | | ||"<<endl;
    cout<<"-|_______|-"<<endl;
      
    getchar();
    
    //passo 6
    CLS
      cout<<"\n\n-Diminuire la pressione interna da 10 bar a 2 bar.\n\n";

    cout<<"  -->||<--"<<endl;
      
    getchar();
	
    //passo 7
    CLS
      cout<<"\n\n-Spegnere i generatori.\n\n";

    cout<<"  ______"<<endl;
    cout<<" |      |"<<endl;;
    cout<<" |  /_  |"<<endl;
    cout<<" |   /  |"<<endl;
    cout<<" |______|"<<endl;
      
    getchar();
	    
    //passo 8
    CLS
      cout<<"\n\n-Spegnere le turbine.\n\n";

    cout<<"   ______"<<endl;
    cout<<"  /  __  \\"<<endl;;
    cout<<" /  /\\/\\  \\"<<endl;
    cout<<" |  \\/\\/  |"<<endl;
    cout<<" \\        /_"<<endl;
    cout<<"  \\_________|"<<endl;
    
    getchar();
		
    //passo 9
    CLS
      cout<<"\n\n-Portare la posizione delle barre di plutonio dal 40% al 0%.\n\n";

    cout<<"  _______"<<endl;
    cout<<"-|       |-"<<endl;;
    cout<<" | | | | |"<<endl;
    cout<<" | | | | |"<<endl;
    cout<<" |||||||||"<<endl;
    cout<<" || | | ||"<<endl;
    cout<<" || | | ||"<<endl;
    cout<<"-|_______|-"<<endl;
      
    getchar();

	    
    //passo 10
    CLS
      cout<<"\n\n-Diminuire la temperatura a 60 °C.\n\n";

    cout<<"  -|"<<endl;
    cout<<"  -|"<<endl;
    cout<<"  -|"<<endl;
    cout<<"  -|"<<endl;
    cout<<"   O"<<endl;
    
    getchar();
		
    //passo 11
    CLS
      cout<<"\n\n-Ridurre la potenza a 100 MW.\n\n";

      
    getchar();
		
    //passo 12
    CLS
      cout<<"\n\n-Chiudere la valvola del liquido refrigerante.\n\n";

    cout<<"  |__"<<endl;
    cout<<"  |__"<<endl;
    cout<<"  |__"<<endl;
    cout<<"  |"<<endl;
    cout<<(char)126<<(char)126<<"O" <<(char)126<<(char)126<<(char)126<<endl;
    cout<<(char)126<<(char)126<<(char)126<<(char)126<<(char)126<<(char)126<<endl;
    
    getchar();
    
    //passo 13
    CLS
      cout<<"\n\n-Inserire la tessera e spegnere il nucleo.\n\n";

    cout<<"               __ __"<<endl;
    cout<<"  ______      /  |  \\"<<endl;;
    cout<<" |------|    /   |   \\"<<endl;
    cout<<" |______|    |   |   |"<<endl;
    cout<<"             \\       /"<<endl;
    cout<<"              \\_____/"<<endl;
      
    getchar();

    *cAuto = true;
    
      }else{ // controllo auto spento
      CLS
	cout<<"\n\n\tPer poter spengnere il controllo automatico immettere il codice\n\tvisualizzato sullo schermo.\n\n\t";

	getline(cin,codice);

	if(codice.compare(COD)==0){ // controllo manuale acceso
	CLS
	  cout<<"\n\n\tCodice corretto.\n\n\t";
	*manual = true;
	getchar();
      }else{
	CLS
	  cout<<"\n\n\tCodice errato.\n\n\t";
	getchar();
      }	
    }
  }
  if(str3.compare("3")==0)
     break;
  }while(true);
}

void controlloManuale(){
  if((*manual)==0){ // controllo manuale spento
    CLS
      cout<<"\n\n\tPrima di poter continuare devi disattivare il controllo automatico.";
    cout<<"\n\n\t";
    getchar();
  }else{ //controllo manuale acceso
    CLS
      cout<<"\n\n\tBenvenuto.\n\tSei intrato nella modalità di controllo manuale\n\tper spegnere qusta centrale.";
    cout<<"\n\tScegliendo questa opzione ti sarà concesso\n\tspegnere la centrale nucleare.";
    cout<<"\n\tTi ricordiamo che spegnendo la centrale, farai perdere probabilmente\n\tmilioni di EURO all\'azienda VEP (Vezzano Energy Product)";
    cout<<"\n\te probabimlente perderai il posto di lavoro.";
    cout<<"\n\n\tSei sicuro di voler andare avanti? [s/n]\n\n";
    cout<<"\t===>";

    char a;

    cin>>a;

    cout<<"\n\n\n\tBene puoi passare al controllo manuale.\n\n\t";

    getchar();

    ultimoAtto();
  }
}

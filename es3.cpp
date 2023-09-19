#include<iostream>
using namespace  std;

int main(){
	int sommaPunti=0, puntiTiro,cont=0, contC=0;
	bool bravo=false;
	do{
		cont++;
		do{
			cout<<"quanti punti hai fatto nel tiro "<<cont<< "?"<<endl;
			cin>>puntiTiro;
		}while(puntiTiro<1 || puntiTiro>20);
		if(puntiTiro==20)
			contC++;
		else
			contC=0;
		if(contC==3)
			bravo=true;
		sommaPunti=sommaPunti+puntiTiro;
	}while(sommaPunti<100);
	cout<<"hai totalizzato "<<sommaPunti<< " in "<<cont<< " tiri"<<endl;
	if(cont==5)
		cout<<"complimenti... percorso netto"<<endl;
	if(bravo)
		cout<<"hai effettuato almeno 3 centri consecutivi";
}

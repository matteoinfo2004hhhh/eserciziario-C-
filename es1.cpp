#include <iostream>
using namespace std;

int main(){
	int km,categoria;
	float prezzo;
	do{
		cout<<"inserisci i km che devi percorrere"<<endl;
		cin>>km;
	}while(km<0);
	do{
		cout<<"inserisci la categoria (1-frecciarossa 2-frecciabianca 3-interregionale)"<<endl;
		cin>>categoria;	
	}while(categoria!=1 && categoria !=2 && categoria!=3);
	if(categoria==1)
		prezzo=km*0.15+60;
	if(categoria==2)
		prezzo=km*0.15+30;
	if(categoria==3)
		prezzo=km*0.15+10;
	cout<<"il prezzo del biglietto vale "<<prezzo<< "euro";	
	
	
		

}




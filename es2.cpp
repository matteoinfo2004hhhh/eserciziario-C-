/*Vengono generati 20 numeri compresi fra -60 e 60. Determina:
"	quanti numeri positivi sono stati generati
"	il numero pi� alto generato 
"	il secondo numero pi� alto. */


#include <iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main(){
	int num,max,max2=-61,i,contpos=0;
	srand(time(NULL));
	//questa parte fuori dal ciclo serve per inizializzare i due valori max e max2
	max=rand() % 120-60;  //genero il primo numero che sar� il massimo
	cout<<max<<endl;	//visualizzo per controllo
	if(max>0)		// cerco se positivo
		contpos++;
	num=rand() % 120-60; //genero secondo numero 
	cout<<num<<endl;
	if(num>0)   // cerco se positivo
		contpos++;
	if(num>max){  // cerco se massimo
		max2=max;
		max=num;	}
	else
		max2=num;
	for(i=0;i<18;i++){ //genero i restanti 20 numeri
		num=rand() % 120-60;
		cout<<num<<endl;
		if(num>0)
			contpos++;
		//cerco prima se � maggiore del massimo 
		if(num>max){
			max2=max;
			max=num;
		} // cerco se � maggiore di max2 nel caso in cui non sia maggiore di max
		else if(num>max2)
			max2=num;
			
	}
	cout<<"il massimo e "<<max<<endl;
	cout<<" il secondo piu alto e "<<max2<<endl;
	cout<<"il totale dei numeri positivi e "<<contpos<<endl;
}

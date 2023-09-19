#include<iostream>
using namespace std;
int main(){
int num1,num2,num3,somma,media;
cout<<"dimmi il valore del numero primo ";
cin>>num1;
cout<<"dimmi il valore del numero secondo ";	
cin>>num2;
cout<<"dimmi il valore del numero terzo ";
cin>>num3;
media=(num1+num2+num3)/3;
cout<<"la media dei numeri e "<<media;
somma=num1+num2+num3;
cout<<"somma totale "<<somma;
if(num1>num2 and num1>num3){
cout<<"il valore del primo numero e maggiore del secondo e del terzo ";
}
if(num2>num1 and num2>num3){
cout<<"il valore del secondo numero e maggiore del primo del terzo";
}
if(num3>num1 and num3>num2){
cout<<"il valore del terzo numero e maggiore del primo del secondo";
}
}

	
		
	


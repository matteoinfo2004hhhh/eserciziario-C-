#include<iostream>
using namespace std;
int main() {
int num1,num2,num3,somma=0;
cout<<"dimmi il primo numero";
cin>>num1;
cout<<"dimmi il secondo numero";
cin>>num2;
cout<<"dimmi il terzo numero";
cin>>num3;
if(num1>num2 and num1>num3){
cout<<"il numero 1 e piu grande del numero 2 e 3";
somma=num2+num3;
}
if(num2>num1 and num2>num3){
cout<<"il numero 2 e piu grande del numero 1 e 3";
somma=num1+num3;
}
if(num3>num1 and num3>num2){
cout<<"il numero 3 e piu grande del numero 1 e 2";
somma=num1+num2;
}
cout<<"la somma e "<<somma<<endl;
}
	
	
	
	
	
	
	
	
	
	


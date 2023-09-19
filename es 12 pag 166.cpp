#include <iostream>
using namespace std; 
int main(){
int i,N,num,somma=0;
cout<<"dimmi il valore ";
cin>>N;
for(i=0;i<N;i++){
   do{
cout<<"dimmi un numero ";
cin>>num;
  }while(num>0 && num%3==1);
  somma=somma+num;
  if(num>0)
  cout<<"numeri sommati positivi pari"<<somma;
  }
	
}

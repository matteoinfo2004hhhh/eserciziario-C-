#include<iostream>
using namespace std;
int main () {
int N,i;
int num,sommap=0,somman=0,contaP=0,contaN=0;
for(i=0;i<N;i++);
do{
  cout<<"dimmi il numero  ";
  cin>>num;
  contaP=i++;
  sommap=sommap+num;
  }while(num>0);
  cout<<"somma positiva  "<<sommap;	
  cout<<"quanti numeri positivi  "<<contaP;	
for(i=0;i<N;i++);
do{
  cout<<"dimmi il numero  ";
  cin>>num;
  contaN=i--;
  somman=somman-num;
  }while(num<0);
cout<<"somma negativa  "<<somman;	
  cout<<"quanti numeri negativi  "<<contaN;	
}
	
	
	
	


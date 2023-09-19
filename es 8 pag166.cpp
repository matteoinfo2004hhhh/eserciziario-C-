#include<iostream>
using namespace std;
int main (){
int N=8,i,num,conta=0,somma=0,sommad=0;
cout<<"dimmi il valore";
cin>>N;
for(i=0;i<N;i++){
   do{
  cout<<"dimmi il numero";
  cin>>num;
  }while(num<0);
  somma=somma+num;
  conta++;
  sommad=num+N*2;
  cout<<num+N<<"la somma "<<num;
}}


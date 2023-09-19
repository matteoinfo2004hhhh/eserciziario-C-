#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int num[10],numm,i,cont=0,giocate=0;
do{
for(i=0;i<10;i++){
num[i]=rand()%100-50;
cout<<num[i]<<endl;
if(numm=num[i]){
cont++;
}
}
for(i=0;i<10;i++){
cout<<"dimmi il numeri";
cin>>num[i];
}
}while(cont!=3);
cout<<"giocate totale"<<giocate;
cout<<"il numero indovinato e "<<cont;
}









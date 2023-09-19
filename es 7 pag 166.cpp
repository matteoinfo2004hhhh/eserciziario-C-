#include<iostream>
using namespace std;
int main (){
int i,N,num,somma=0,frequenza;
cout<<"dimmi il valore ";
cin>>N;
for(i=0;i<N;i++);
   do{
    cin>>num;
    cout<<"frequenza numero "<<num*somma;
    somma=somma+num;
    frequenza=num*somma;
   }while(frequenza<200);
   cout<<"superati il valore 200 ";	
}   

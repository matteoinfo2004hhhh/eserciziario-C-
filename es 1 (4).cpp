#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int num[100],contpari=0,somman=0,i;
srand(time(NULL));

for(i=0;i<10;i++){
num[i]=rand()%40-20;
if(num[i]%2==0){
contpari++;
}

if(num[i]<0){
somman=somman+num[i];
}

for(i=0;i<10;i++){
if(num[i]%2==0 and i%2==0){
contpari++;
}	
cout<<"dimmi il numero del vettore";
cin>>num[i];
}
cout<<num[i]<<endl;
cout<<"numeri pari totale "<<contpari<<endl;
cout<<"numeri somma negativa "<<somman<<endl;
}}

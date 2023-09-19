#include<iostream>
#include<string>
using namespace std;
int main(){
int NUM=5;
int add,i,j;	
string citta[NUM],ricerca,max,min;
citta[0]="londra";
citta[1]="firenze";
citta[2]="forzafranco";
citta[3]="germania";
citta[4]="torino";
cout<<"dimmi il nome della citta";
cin>>citta[i];
for(i=0;i<5;i++){
if(ricerca==citta[i]){
cout<<"la citta e "<<citta[i]<<endl;	                                                                                                
}		
}
for(i=0;i<5;i++){
cout<<"dimmi la temperatura della citta";
cin>>citta[i];	
}
for(i=0;i<5;i++){
if(citta[i]>max){
max=citta[i];	
}		
}
for(i=0;i<5;i++){
if(citta[i]<min){
min=citta[i];	
}	
}
for(i=0;i<5;i++){
for(j=0;j<5;j++){
if(citta[i]>citta[j]){
add=citta[i];
citta[i]=citta[j];	
citta[j]=add;		
}	
}
for(j=0;j<5;j++){
cout<<citta[j]<<endl;
cout<<"esercursione e "<<endl;
}	
}
cout<<"la temperatura massima e "<<max<<citta[i]<<endl;
cout<<"la temperatura minima"<<min<<citta[i]<<endl;	
}

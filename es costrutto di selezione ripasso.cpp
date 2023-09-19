#include<iostream>
using namespace std;
int main (){	
int settimane,costototale;
float scontro,prezzo,prezzipersona1,prezzipersona2,prezzipersona3;
int const persona1=5,persona2=10,persona3=15;
cout<<"dimmi lo scontro";
cin>>scontro;
cout<<"dimmi il prezzo";
cin>>prezzo;
if(scontro<persona1){  
prezzipersona1=prezzo*scontro/5;
cout<<"il prezzo della prima persona e "<<prezzipersona1;}
else{
cout<<"il prezzo e imposibile";	
if(scontro<persona2){
prezzipersona2=prezzo*scontro/10;
cout<<"il prezzo della seconda persona e "<<prezzipersona2;}
else{
cout<<"il prezzo e imposibile";	
if(scontro<persona3){
prezzipersona3=prezzo*scontro/15;
cout<<" il prezzo della terza persona e "<<prezzipersona3;}
else{
cout<<"il prezzo e imposibile";		
}}}}
	
	
	

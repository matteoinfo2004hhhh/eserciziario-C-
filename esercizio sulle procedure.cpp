#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int vettore();
int vettore2();
int vettore3();
int vettore4();
int vettore5();


int main(){
cout<<vettore();
cout<<vettore2();
cout<<vettore3();
cout<<vettore4();
cout<<vettore5();
}


//prima procedura
int vettore(){
int vdati[10],i;
srand(time(NULL));
for(i=0;i<10;i++){
vdati[i]=rand()%40-20;
cout<<vdati[i]<<endl;	
}
}


//seconda procedura
int vettore2(){
int vdati[10],i;
for(i=0;i<10;i++){
if(i%2==0){
cout<<"posizione pari "<<i<<endl;	
}	
}
for(i=0;i<10;i++){
if(vdati[i]%2==0){
cout<<"numeri pari sono"<<vdati<<i<<endl;	
}	
}	
}


//terza procedura
int vettore3(){
int vdati[10],somma=0,i,media;
for(i=0;i<10;i++){
somma=somma+vdati[i];	
}	
media=10/somma;	
cout<<"la media del vattore memorizzato"<<media<<endl;
}

//quarta procedura
int vettore4(){
int vdati[10],i;
int trov=false;
for(i=0;i<10;i++){
if(vdati[i]==0){
trov=true;	
cout<<"trovato"<<vdati[i]<<endl;
}else{
cout<<"non trovato"<<vdati[i]<<endl;	
}	
}
}

//quinta procedura
int vettore5(){
int vdati[10],i,max,conmax=0;
for(i=0;i<10;i++){
if(vdati[i]>max){
max=vdati[i];
conmax++;	
}
}	
cout<<"il massimo e"<<max<<endl;
cout<<"totale della apparizione del massimo e "<<conmax<<endl;	
}

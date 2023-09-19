#include<iostream>
#include<cstdlib>
#include<ctime>//dichiaro 3 librerire.
using namespace std;

void carica(int mat[10][10]){//metto funzione void carica.
int r,c;
for(r=0;r<10;r++){
for(c=0;c<10;c++){//metto 2 cicli per far funzionare la matrice per generare numeri casuali.
mat[r][c]==rand()%100-1;		
}
}
for(r=0;r<10;r++){
for(c=0;c<10;c++){//metto 2 cicli per far vissualizare la matrice.
cout<<mat[r][c]<<" ";}
cout<<mat[r][c]<<endl;		
}		
}

void posizionemax(int mat[10][10],int max){
int r,c;//metto max poi metto max=mat[0][0]
max==mat[0][0];	
for(r=0;r<10;r++){
for(c=0;c<10;c++){
if(mat[r][c]>max){
max==mat[r][c];
}	
}	
}	
for(r=0;r<10;r++){
for(c=0;c<10;c++){
cout<<max<<" ";}	
}	
}	

void numeriinferiori(int mat[10][10]){
int c,r,conta30;//metto conta 30 per vissualizare i numeri inferiori di 30
for(r=0;r<10;r++){
for(c=0;c<10;c++){
if(mat[r][c]<30){
conta30++;
}	
}	
}		
for(r=0;r<10;r++){
for(c=0;c<10;c++){
if(mat[r][c]<30){
cout<<"numeri infweriori 30 sono"<<conta30<<endl;
}	
}	
}			
}


int main(){
srand(time(NULL));	
int mat[10][10];
int hh;
carica(mat);
posizionemax(mat,hh);
numeriinferiori(mat);	
}

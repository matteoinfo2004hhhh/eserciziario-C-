#include<iostream>
#include<cstdlib>//dichiaro 3 librerie.
#include<ctime>
using namespace std;

void matrice(int mat[10][10]){
int r,c;
for(r=0;r<10;r++){
for(c=0;c<10;c++){
mat[r][c]=rand()%50-1;//metto random per generare la matrice con numeri casuali.
}	
}
for(r=0;r<10;r++){
for(c=0;c<10;c++){
cout<<mat[r][c]<<" ";//stampo una matrice.	
}	
cout<<endl;
}
}	
	
void riga(int mat[10][10]){
int r,c;
for(r=0;r<10;r++){	
for(c=0;c<10;c++){
if(mat[r]<mat[c]){
cout<<"la seguenza piu altra e "<<mat[r][c]<<"per riga "<<r<<endl;
}	
}
}
}

void somma(int mat[10][10],int somma=0){
int r,c;	
for(r=0;r<10;r++){
somma=somma+mat[r][c];//fa la somma per riga.
somma=somma+mat[0][10];//per mette di fare la somma sopra.
}		
cout<<"la somma e "<<somma<<endl;
}

int main(){
int m[10][10];	
matrice(m);	
somma(m);//metto m per matrice.
riga(m);
}

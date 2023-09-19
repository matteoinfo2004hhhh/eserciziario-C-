#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//creo una procedura di nome "carica" di tipo "void" che non ritorna nessun valore
void carica(int vet[10]){ // creo un parametro formale (vet[10]) di tipo int che si riferisce a dati
	int i; // dichiaro una variabile locale (nasce e muore nella funzione)
	for(i=0;i<10;i++){
		vet[i]=rand()%41-20;
	}// carico il vettore "dati" con 10 numeri compresi tra -20 e 20
}

void pariPosizione(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		if(vet[i]%2==0){ // controllo se il numero è pari 
			cout<<vet[i]<<" in posizione "<<i<<endl;; 
		} // nel caso vero scrivo "vet[i]" cioè il numero e "i" che indica la posizione
	}
}

void media(int vet[10]){
	int i,somma=0;
	for(i=0;i<10;i++){
		somma+=vet[i]; //addiziono alla variabile LOCALE somma i 10 numero in dati
	}
	cout<<"La media dei numeri vale "<<somma/10<<endl; //leggo la somma diviso 10 che rappresenta la media
}

void numZero(int vet[10]){
	int trov=false,i=0;
	do{
		if(vet[i]==0){
			trov=true; //se dentro il vettore trova il numero 0 trov diventa true
		}
		i++;
	}while(!trov && i!=10); //finchè trov si mantiene falso negato cioè vero E i diverso da 10 il ciclo continua
	if(trov){ //se trov è vero mi leggerà "Trovato", in caso contrario "Non trovato"
		cout<<"Trovato"<<endl;
	}else{
		cout<<"Non trovato"<<endl;
	}
}

void massimoCont(int vet[10]){
	int max,i,cont=0;
	max=vet[0]; // assegno vet[0] a max
	for(i=1;i<10;i++){
		if(vet[i]>max){ // se vet[i] è maggiore a max, max diventa vet[i]
			max=vet[i];
		}
	}
	for(i=0;i<10;i++){
		if(vet[i]==max){ //se vet[i] è uguale alla variabile max aggiungo 1 a cont che conta quante volte il
			cont++; // numero massimo è uscito
		}
	}
	cout<<"Il numero massimo ("<<max<<") compare "<<cont<<" volta/e";
}
int main(){
	srand(time(NULL));
	int dati[10]; //dichiaro un vettore di dimensione 10
	carica(dati); // "dati" parametro attuale che si riferisce a vet[10]
	pariPosizione(dati);
	media(dati);
	numZero(dati);
	massimoCont(dati);
}

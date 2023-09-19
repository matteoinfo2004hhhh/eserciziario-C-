/*AVVERTENZE: 
- il programma si intende minimale e non sono implementati volutamente
- una parte di controlli;
- il titolo recepisce solo una parola per semplicità, altrimenti
- bisogna utilizzare getline e la gestione delle stringhe e caratteri
- il menu nel compito non era necessario nè valutato
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int N=1000;
int id=0,idElim=0; //id variabile contatore di libri presenti in biblioteca
string titoliEliminati[1000];
//definizione della struttura biblioteca (titolo, autore, prezzo) con la tabella libro (array di record)
struct biblioteca{
	string titolo,autore;
	float prezzo;
}libro[N];
//punto 1. funzione che carica un SINGOLO libro (pensato per il menu)
void caricaLibro(){
	cout<<"Inserire l'autore: ";
	cin>>libro[id].autore;
	cout<<"Inserire il titolo: ";
	cin>>libro[id].titolo;
	cout<<"Inserire il prezzo: ";
	cin>>libro[id].prezzo;
	id++;
	cout<<"Libro inserito";
}
//funzione chiede l'autore e visualizza i titoli (gestione minimale)
void stampaTitoli(){
	string ricerca; //varibiale di ricerca dell'autore
	bool trov=false; // indica se è presente l'autore
	cout<<"Inserire l'autore: ";
		cin>>ricerca;
		for(int i=0;i<id;i++){
			if(libro[i].autore==ricerca){
				trov=true;
				cout<<"Titolo : "<<libro[i].titolo<<endl;
			}
		}
		if(!trov){
			cout<<"Non ci sono libri in libreria con questo autore";
		}
	}

//funzione ricerca il numero di libri con prezzo compreso fra 10 e 20 euro
void prezzoCompreso(){
	int cont=0;
	for(int i=0;i<id;i++){
			if(libro[i].prezzo>=10 && libro[i].prezzo<=20){
				cont++;
			}  
		}
	cout<<"Ci sono "<<cont<<" libro con un prezzo compreso tra 10 e 20";
	}

//funzione ricerca l'autore e visualizza i titoli ordinati. 
//una possibile soluzione è quella di memorizzare in un vettore i titoli e poi ordinare
void autoreOrdine(){
	string scelta;
	string titoli[1000],app; //vettore titoli e variabile app per ordinamento
	int cont=0,i,j;
	bool trov=false;
	cout<<"Inserire l'autore: ";
		cin>>scelta;
		for(i=0;i<id;i++){
			if(libro[i].autore==scelta){
				titoli[cont]=libro[i].titolo;
				cont++;
				trov=true;
			}
		}
	//ordinamento vettore titoli
		for(i=0;i<cont-1;i++){
			for(j=i+1;j<cont;j++){
				if(titoli[i]>titoli[j]){
					app=titoli[i];
					titoli[i]=titoli[j];
					titoli[j]=app;
					}
			}
		}
		//visualizza i titoli
		for(i=0;i<cont;i++){
			cout<<"Titoli ordinati "<<i+1<<": "<<titoli[i]<<endl;
		}
		
		if(!trov){
			cout<<"Non ci sono titoli con questo autore"<<endl;
		}
		
}

//funzione che permette la vendita del libro
void titoloElimina(){
	string scelta;
	int cont=0;
	bool trov=true;
	cout<<"Inserire il titolo da eliminare: ";
	cin>>scelta;
	do{
		if(libro[cont].titolo==scelta){
			trov=false;
			}else{
				cont++;
			}
		}while(trov && cont<=id); //ciclo termina quando lo trova o finisce i confronti e non trova il libro
		
		if(trov){
			cout<<"Non ci sono titoli con la tua scelta";
		}else{
			libro[cont].titolo=titoliEliminati[idElim];
			idElim++;
		//sovrascrive la posizione "da cancellare" shiftando l'array di record 
			for(int i=cont;i<id-1;i++){
				libro[i].titolo=libro[i+1].titolo;
				libro[i].autore=libro[i+1].autore;
				libro[i].prezzo=libro[i+1].prezzo;
			}
	
			id--; // riduco il numero di libri presenti
			
			cout<<"Libro eliminato";
		}
	
}
int main(){
	int scelta;
	cout<<endl;
	cout<<"1.Carica un libro"<<endl;
	cout<<"2.Guarda i titoli dei libri in biblioteca richiesto l'autore"<<endl;
	cout<<"3.Stampa tutti i libri con un prezzo compreso tra 10 e 20"<<endl;
	cout<<"4.Richiesto l'autore stampare tutti i titoli in ordine alfabetico crescente"<<endl;
	cout<<"5.Elimina un titolo"<<endl;
	cin>>scelta;
	switch(scelta){
		case 1: caricaLibro();
		main();
		break;
		case 2: stampaTitoli();
		main();
		break;
		case 3: prezzoCompreso();
		main();
		break;
		case 4: autoreOrdine();
		main();
		break;
		case 5: titoloElimina();
		main();
		break;
		default: cout<<"Errore"<<endl;
		main();	
	}
}

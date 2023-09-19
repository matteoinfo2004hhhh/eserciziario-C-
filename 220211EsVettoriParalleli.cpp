/*Caricare in due vettori paralleli di nome citta e popolazione, 5 cittA  cone le relative popolazioni.
Successivamente :
1. chiesto all'utente una cittA  visualizzare la sua popolazione
2. visualizzare la citta  con la popolazione più alta*/

#include <iostream>
#include <string>
using namespace std;

int main() {
// pop[] e citta[] sono due vettori che gestiamo come "paralleli"
int DIM=5;
int pop[DIM],i,max,imax;
bool trov=false;
string citta[DIM],ricerca;
// assegnazione dei valori nel vettore pop  
pop[0]=872000;
pop[1]=962000;
pop[2]=1400000;
pop[3]=358000;
pop[4]=190000;
// assegnazione dei valori nel vettore città
citta[0]="torino"; 
citta[1]="napoli";
citta[2]="milano";
citta[3]="firenze";
citta[4]="brescia";
//input nome della ricerca
cout<<"dimmi la citta di cui vuoi conoscere la popolazione "<<endl;
cin>>ricerca;
//ciclo per verificare la città richiesta
for(i=0; i<5; i++){
    if(ricerca==citta[i]){
      cout<<pop[i]<<endl;
      trov=true; // variabile che mi permette di sapere se ha trovato la città
    }
  }
if(!trov)
	cout<<"non ho trovato la città"<<endl; //cout di cortesia
//algoritmo ricerca del massimo
max=pop[0];
for(i=1; i<5; i++){
    if(pop[i]>max){
      	max=pop[i];
      	imax=i; //memorizzo la posizione in cui si trova il massimo
    } 
  }
cout<<"la citta con la popolazione piu alta e "<<citta[imax]<<" con "<<max<<" abitanti";
  
}

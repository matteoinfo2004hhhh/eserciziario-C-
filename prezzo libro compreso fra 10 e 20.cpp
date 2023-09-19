#include<iostream>
#include<math.h>
using namespace std;
main(){
int prezzolibro,prezzoiniziale,scontropercentuale,prezzofinale1;
cout<<"il valore del prezzo del libro1 ";
cin>>prezzolibro;
cout<<"il valore dello scontro del libro1 ";
cin>>scontropercentuale;
prezzoiniziale=scontropercentuale/prezzolibro;
prezzofinale1=prezzolibro-prezzoiniziale/20;
cout<<"il prezzo del libro1 e "<<prezzofinale1;
cout<<"il scontro del libro1 e "<<prezzoiniziale;
}	

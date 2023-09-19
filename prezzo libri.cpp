#include<iostream>
#include<math.h>
using namespace std;
main(){
int prezzolibro1,prezzolibro2,prezzolibro3,prezzolibro4,prezzoiniziale,scontropercentuale,prezzofinale1;
int prezzofinale2,prezzofinale3,prezzofinale4,prezzoiniziale2,prezzoiniziale3,prezzoiniziale4;
cout<<"il valore del prezzo del libro1 ";
cin>>prezzolibro1;
cout<<"il valore dello scontro del libro1 ";
cin>>scontropercentuale;
prezzoiniziale=scontropercentuale/prezzolibro1;
prezzofinale1=prezzolibro1-prezzoiniziale;
cout<<"il prezzo del libro1 e "<<prezzofinale1;
cout<<"il scontro del libro1 e "<<prezzoiniziale;
cout<<"il valore del prezzo del libro2 ";

cin>>prezzolibro2;
cout<<"il valore dello scontro del libro2 ";
cin>>scontropercentuale;
prezzoiniziale=scontropercentuale/prezzolibro2;
prezzofinale1=prezzolibro2-prezzoiniziale2;
cout<<"il prezzo alto del libro2 e "<<prezzofinale2;
cout<<"il scontro del libro2 e "<<prezzoiniziale2;

cin>>prezzolibro3;
cout<<"il valore alto dello scontro del libro3 ";
cin>>scontropercentuale;
prezzoiniziale=scontropercentuale/prezzolibro3;
prezzofinale1=prezzolibro3-prezzoiniziale3;
cout<<"il prezzo del libro3 e "<<prezzofinale3;
cout<<"il scontro del libro3 e "<<prezzoiniziale3;

cin>>prezzolibro4;
cout<<"il valore dello scontro del libro4 ";
cin>>scontropercentuale;
prezzoiniziale=scontropercentuale/prezzolibro4;
prezzofinale1=prezzolibro4-prezzoiniziale4;
cout<<"il prezzo del libro4 e "<<prezzofinale4;
cout<<"il scontro del libro4 e "<<prezzoiniziale4;
}




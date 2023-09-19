#include<iostream>
using namespace std;
int main (){
int const SCONTRO=50;
int costo,prodotto1,prodotto2,prezzo;
cout<<"dimmi lo scontro dei prodotti";
cin>>costo;
cin>>prodotto1;
cin>>prodotto2;
prezzo=(prodotto1-prodotto2)+costo*SCONTRO;
cout<<"cosot totale dei prodotti"<<prezzo;
}




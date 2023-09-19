#include<iostream>
#include<math.h>
using namespace std;
int main (){
float Ndiscatti,Ndiscattiletti,costodelsingoloscatto,importo;
cin>>Ndiscatti;
cin>>importo;
Ndiscattiletti=500*Ndiscatti+(importo/100);
costodelsingoloscatto=1+Ndiscatti/200;
cout<<"numero di scatti letti"<<Ndiscattiletti;
cout<<"costo del singolo scatto"<<costodelsingoloscatto;

}



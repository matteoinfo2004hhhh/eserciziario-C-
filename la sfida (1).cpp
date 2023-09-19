#include<iostream>
using namespace std;
int main ()
{
const int ANNI10=10;
const int ANNI18=18;
const int ANNI65=65;	
int num,importo;
cout<<"inserisci ETA tra 10 e 65  ";
cin>>num;
switch(num)		
{
case ANNI10:
cout<<"il biglietto e gratis"<<endl;
break;
case ANNI18:
cout<<"il biglietto costa 10 euro"<<endl;
break;
case ANNI65:
cout<<"il biglietto costa 5 euro"<<endl;
break;
default:
cout<<"errore"<<endl;
}
}

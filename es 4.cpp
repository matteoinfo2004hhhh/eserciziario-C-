#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
int dado1,dado2,cont=0;
cout<<"dimmi il lancio del dado1 ";
cin>>dado1;
cout<<"dimmi il lancio del dado2 ";
cin>>dado2;
srand(time(NULL));
do{
cout<<"primo dado"<<dado1<<endl;
cout<<"secondo dado"<<dado2<<endl;
dado1=rand()%6+1;
dado2=rand()%6+1;
cont++;
}while((dado1==3)||(dado2==3));
cout<<"la coppia dei 3 numeri";
}


	

	

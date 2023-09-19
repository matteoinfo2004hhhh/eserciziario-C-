#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
int dado1,dado2,cont=0;
cout<<"dimmi il numero del primo dado";
cin>>dado1;
cout<<"dimmi il numero del secondo dado";
cin>>dado2;
srand(time(NULL));
do{
dado1=rand()%6+1;
cout<<"il primo dado"<<dado1<<endl;
dado2=rand()%6+1;
cout<<"il secondo daddo"<<dado2<<endl;
cont++;
}while(dado1!=dado2);
cout<<"ho impegnato"<<cout<<" lanci";
}
	
	
	
	
	
	
	
	


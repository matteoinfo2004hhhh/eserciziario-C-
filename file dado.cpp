#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
srand(time(NULL));	
int dado1,dado2,cont=0,numerog=0;
do{
dado1=rand()%6+1;
dado2=rand()%6+1;
cout<<"il numero del primo dado e "<<dado1<<endl;
cout<<"il numero del secondo dado e "<<dado2<<endl;
cont++;
if(dado1==dado2){
cont=cont*2;
numerog++;
}
cout<<"punteggio: "<<cont<<endl;
}while(cont<100);
cout<<"gioco finito"<<endl;
cout<<"il numero di giocate che ha effetuato e "<<numerog<<endl;

ofstream	mioFile;

mioFile.open("testo.txt");
do{
dado1=rand()%6+1;
dado2=rand()%6+1;
mioFile<<"il numero del primo dado e "<<dado1<<endl;
mioFile<<"il numero del secondo dado e "<<dado2<<endl;
cont++;
if(dado1==dado2){
cont=cont*2;
numerog++;
}
mioFile<<"punteggio: "<<cont<<endl;
}while(cont<100);
mioFile<<"gioco finito"<<endl;
mioFile<<"il numero di giocate che ha effetuato e "<<numerog<<endl;
mioFile.close();
}

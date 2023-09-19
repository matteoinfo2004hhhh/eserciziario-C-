#include<iostream>
using namespace std;

struct s_studenti{
char nome[20];	
char cognome[20];
float votiscritti;		
float votiorale;
float votipratica;
float quadrimestre;
float media;	
}studente[100];

int main(){
int i,alievi;
cout<<"dimmi il numero degli studenti ";
cin>>alievi;
for(i=0;i<alievi;i++){
cout<<"dimmi il nome dello studente1 ";
cin>>studente.nome;
cout<<"dimmi il cognome dello studente1 ";
cin>>studente.cognome;
cout<<"dimmi il voto scritto ";
cin>>studente.votiscritti;
cout<<"dimmi il voto orale ";
cin>>studente.votiorale;
cout<<"dimmi il voto pratica";
cin>>studente.votipratica;
}
}

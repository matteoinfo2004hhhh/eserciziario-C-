#include<iostream>
#include<string>//prima per iniziare metto 2 librerie uno #include<iostream> e #include<string>.
using namespace std;
//per iniziare il programma dichiaro 2 funzioni che sono void frasevocalemaiuscola e void consonanti.
void frasevocalemaiuscola(string &frase){
int trov=false,i,maiuscola;
char c=frase[i];//uso il vettore char per le maiuscole 
for(i=0;i<frase.size();i++){ //faccio un ciclo for della funzione usando la variabile frase.size().
}if(islower(c)){ 
trov=true;               //faccio if(islower(c)) per le maiuscole poi dopo questo dichiaro i valori boleani.
cout<<"non e maiuscola ";
}else{
cout<<"e maiuscola ";	
}
}


void consonanti(const string &consonante){
int i,consonatii=0;
char c=consonante[i];//uso il vettore per le consonanti.
for(i=0;i<consonante.size();i++){
if(isalpha(c)){//per sapere le consonanti faccio un if(isalpha(c)).
consonatii++;	
}else{
consonatii++;	
}
}
if(consonatii>3){//faccio un if per sapere che le consonanti sono almeno 3
cout<<"le consonanti sono "<<consonatii;	
}else
cout<<"le consonati non sono almeno 3 "<<consonatii;
}


int main(){
string frase;
cout<<"dimmi la frase ";
getline(cin,frase);//metto getline che è una fuonzione che usa i parametri passati.
frasevocalemaiuscola(frase);
consonanti(frase);
}


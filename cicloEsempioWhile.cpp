#include <iostream>
using namespace std; 

int main(){
	int N,i;
	float voto,somma=0,media,max=-1;
	cout<<"quanti voti vuoi inserire?";
	cin>>N;
	//for(i=0;i<N;i++)
	i=0;
	while(i<N){
		do{
			cout<<"quale voto ha preso? "<<;
			cin>>voto;
		}while((voto>10 || voto<1));
		somma=somma+voto;
		if(voto>max)
			max=voto;
		i++;	
	};
	media=somma/N;
	cout<<"la media vale "<<media<<endl;
	cout<<"il massimo vale "<<max;
}

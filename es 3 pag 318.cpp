#include<iostream>
using namespace std;

struct s_pianeti{	
char nome[20];
char orbite[20];
int lune;
int distanza;		
}pianeta1,pianeta2,pianeta3,pianeta4,pianeta5;	
	

int main(){
//pianeta1	
cout<<"dimmi il nome del primo pianeta ";	
cin>>pianeta1.nome;
cout<<"dimmi orbita del primo pianeta ";
cin>>pianeta1.orbite;
cout<<"dimmi le lune ";
cin>>pianeta1.lune;
cout<<"dimmi le distanze ";
cin>>pianeta1.distanza;
//pianeta2
cout<<"dimmi il nome del secondo pianeta ";	
cin>>pianeta2.nome;
cout<<"dimmi orbita del secondo pianeta ";
cin>>pianeta2.orbite;
cout<<"dimmi le 2 lune ";
cin>>pianeta2.lune;
cout<<"dimmi le 2 distanze ";
cin>>pianeta2.distanza;
//pianeta3
cout<<"dimmi il nome del terzo pianeta ";	
cin>>pianeta3.nome;
cout<<"dimmi orbita del terzo pianeta ";
cin>>pianeta3.orbite;
cout<<"dimmi 3 le lune ";
cin>>pianeta3.lune;
cout<<"dimmi 3 le distanze ";
cin>>pianeta3.distanza;
//pianeta4
cout<<"dimmi il nome del quarto pianeta ";	
cin>>pianeta4.nome;
cout<<"dimmi orbita del quarto pianeta ";
cin>>pianeta4.orbite;
cout<<"dimmi 4 le lune ";
cin>>pianeta4.lune;
cout<<"dimmi 4 le distanze ";
cin>>pianeta4.distanza;
//pianeta5
cout<<"dimmi il nome del quinto pianeta ";	
cin>>pianeta5.nome;
cout<<"dimmi orbita del quinto pianeta ";
cin>>pianeta5.orbite;
cout<<"dimmi 5 le lune ";
cin>>pianeta5.lune;
cout<<"dimmi 5 le distanze ";
cin>>pianeta5.distanza;

//pianeta1
cout<<"il nome del primo pianeta e "<<pianeta1.nome<<endl;
cout<<"orbita del primo piantera e "<<pianeta1.orbite<<endl;
cout<<"le lune del prima pianeta e "<<pianeta1.lune<<endl;
cout<<"le lune del prima pianeta e "<<pianeta1.distanza<<endl;
//pianeta2
cout<<"il nome del secondo pianeta e "<<pianeta2.nome<<endl;
cout<<"orbita del secondo piantera e "<<pianeta2.orbite<<endl;
cout<<"le lune del secondo pianeta e "<<pianeta2.lune<<endl;
cout<<"le lune del secondo pianeta e "<<pianeta2.distanza<<endl;
//pianeta3
cout<<"il nome del terzo pianeta e "<<pianeta3.nome<<endl;
cout<<"orbita del terzo piantera e "<<pianeta3.orbite<<endl;
cout<<"le lune del terzo pianeta e "<<pianeta3.lune<<endl;
cout<<"le lune del terzo pianeta e "<<pianeta3.distanza<<endl;
//pianeta4
cout<<"il nome del quarto pianeta e "<<pianeta4.nome<<endl;
cout<<"orbita del quarto piantera e "<<pianeta4.orbite<<endl;
cout<<"le lune del quarto pianeta e "<<pianeta4.lune<<endl;
cout<<"le lune del quarto pianeta e "<<pianeta4.distanza<<endl;
//pianeta5
cout<<"il nome del quinto pianeta e "<<pianeta5.nome<<endl;
cout<<"orbita del quinto piantera e "<<pianeta5.orbite<<endl;
cout<<"le lune del quinto pianeta e "<<pianeta5.lune<<endl;
cout<<"le lune del quinto pianeta e "<<pianeta5.distanza<<endl
;
}

#include<iostream>
using namespace std;
int main (){
int lato,lunghezza,perimetro;
cout<<"dimmi i lati";
cin>>lato;
switch(lato){
case 3:
perimetro=lato*3;
cout<<"triangolo";
break;
case 4:
perimetro=lato*4;
cout<<"quadrato";
break;
case 5:
perimetro=lato*5;
cout<<"pentagono";
break;
case 6: 
perimetro=lato*6;
cout<<"esagono";
break;
case 7:
perimetro=lato*7;
cout<<"ettangono";
break;
case 8:
perimetro=lato*8;
cout<<"ottangono";
break;
cout<<"il numero e diverso";
}
cout<<"il perimetro e "<<perimetro<<endl;
}
	
	
	

#include<iostream>
#include<math.h>
using namespace std;
int main (){
int latob,base,altezza,perimetro,area;
cout<<"dimmi la base ";
cin>>base;
cout<<"dimmi l altezza ";
cin>>altezza;
latob=sqrt(altezza*altezza+base*base/4);
cout<<"lato obliquo e "<<latob;
perimetro=base+latob*2;
cout<<"perimetro e "<<perimetro;
area=base*altezza/2;
cout<<"area e "<<area;	
		
}

#include<iostream>
#include<math.h>
using namespace std;
int main() {
int conp=0,cond=0;
int n1,n2,n3,n4,n5,i;
cout<<"metti un numero ";
cin>>n1;
cout<<"metti un secondo numero ";
cin>>n2;
cout<<"metti un terzo numero ";
cin>>n3;
cout<<"metti un quarto numero ";
cin>>n4;
cout<<"metti un quinto numero ";
cin>>n5;
for(i=0;i<10;i++)

{
i+1;
if(n1%2==1)
cout<<n1<<endl;
if(n2%2==1)
cout<<n2<<endl;
if(n3%2==1)
cout<<n3<<endl;
if(n4%2==1)
cout<<n4<<endl;
if(n5%2==1)
cout<<n5<<endl;
conp+=1;
cout<<"numeri pari  "<<conp;
}
if(n1%3==0)
cout<<n1<<endl;
if(n2%3==0)
cout<<n2<<endl;
if(n3%3==0)
cout<<n3<<endl;
if(n4%3==0)
cout<<n4<<endl;
if(n5%3==0)
cout<<n5<<endl;
cond+=2;
cout<<"numeri dispari "<<cond;		
}




	



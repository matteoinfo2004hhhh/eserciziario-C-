#include<iostream>
using namespace std;
int main(){
int base1,base2,altezza1,altezza2,area1,area2;
cout<<"dimmi il base del primo rettangolo ";
cin>>base1;
cout<<"dimmi altezza del primo rettangolo ";
cin>>altezza1;
area1=base1*altezza1;
cout<<"dimmi il base del secondo rettangolo  ";
cin>>base2;
cout<<"dimmi altezza del secondo rettangolo ";
cin>>altezza2;
area2=base2*altezza2;
if(area1>=area2){
cout<<"area del primo rettangolo e maggiore del secondo rettangolo";}
else{if(area2>=area1){
cout<<"area del secondo rettangolo e maggiore del primo rettangolo";}
}}

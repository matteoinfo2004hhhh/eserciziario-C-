#include<iostream>
using namespace std;
int main (){
int i,num,max=0,contnega=0,contpost=0;
for(i=0;i<10;i++){
	cout<<"dimmi i numeri";
	cin>>num;	
	if(num<0){
		contnega++;}
	else{
		contpost++;}
if(num>max){
max=num;
}}
cout<<"numeri negativi totale"<<contnega<<endl;
cout<<"numeri positivi totale"<<contpost<<endl;
cout<<"il numero massimo e"<<max<<endl;
}
	
	
	
	
	


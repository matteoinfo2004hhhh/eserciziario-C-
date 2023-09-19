#include<iostream>
using namespace std;
int main (){
int i,temp,max=0,min=0,conta=0,media,somma=0;
 for(i=0;i<31;i++){
	do{
	cout<<"dimmi la temperatura"<<i;
	cin>>temp;
	}while((temp<-70)||(temp>70));
	cout<<"dimmi quando e la temperatura";
	if(temp<10||temp>20){
	cout<<"fa freddo";
	somma=somma+temp;
	conta++;}
	else{
	cout<<"fa  caldo";}
	if(temp<0){
	cout<<"fa molto freddo";
	}
    media=somma/31;
	cout<<"la media della temperatura e "<<media;
    }
	if(temp>max);{
	max=temp;
	}
	if(temp<min);{
	min=temp;
    }}


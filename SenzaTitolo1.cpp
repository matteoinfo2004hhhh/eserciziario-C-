#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
float TEMP[10];
int mediaG,i,misurazione,max=0,nim=0,contmisura=0;MEMO=[5];
for(i=0;i<10;i++){
cout<<"dimmi la temperatura";
cin>>TEMP[i];	
}
max=TEMP[0];
min=MEMO[0];
for(i=0;i<10;i++){
cout<<TEMP[i]<<endl;		
}
mediaG=10/TEMP[i];
for(i=0;i<10;i++){
if(TEMP[i]<0){
contmisura++;
}	
}
for(i=0;i<10;i++){
for(TEMP[i]>max){
max=TEMP;	
}	
for(i=0;i<10;i++){
if(MEMO[i]<min){
min=MEMO;	
}		
}
cout<<"la media dellle giornate e "<<mediaG<<endl;
cout<<"le misurazione sotto zero sono"<<contmisura<<endl;
cout<<"il massimo della temperatura e"<<max<<endl;
cout<<"la temperatura del meno e "<<min<<endl;		
}









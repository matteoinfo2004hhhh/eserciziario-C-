#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int num[100],i,max=0,min=0;
for(i=0;i<10;i++){
num[i]=rand()%2000-1000;
cout<<num[i]<<endl;
}
max=num[0];
min=num[0];
for(i=0;i<10;i++){
if(num[i]>max){
max=num[i];
}	
for(i=0;i<10;i++){
if(num[i]>max){
max=num[i];
}	
for(i=0;i<10;i++){
if(max>min){
if(num[i]<max){
max=num[i];
}
for(i=0;i<10;i++){
if(max<min){
if(num[i]>min){
min=num[i];
}
}
}
}
}
cout<<"il massimo e "<<max<<endl;
cout<<"il minnimo e "<<min<<endl;
}}}

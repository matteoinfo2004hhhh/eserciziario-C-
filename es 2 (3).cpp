#include<iostream>
#include<fstream>
using namespace std;
int main(){
int num,i,n,cont=0;
cout<<"dimmi il numero ";
cin>>n;
for(i=0;i<n;i++){
cout<<"dimmi il numero positivo";
cin>>num;
if(num==n){
cont++;	
}
if(num>0){
cout<<num<<endl;	
}
}
cout<<"inserizione del numero e "<<cont<<endl;

ofstream mioFile;
mioFile.open("numeri.txt");
cout<<"dimmi il numero ";
cin>>n;
for(i=0;i<n;i++){
cout<<"dimmi il numero positivo";
cin>>num;
if(num==n){
cont++;	
}
if(num>0){
mioFile<<num<<endl;	
}
}
mioFile<<"inserizione del numero e "<<cont<<endl;
}

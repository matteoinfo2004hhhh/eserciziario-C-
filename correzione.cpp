#include<iostream>
#include<string>
using namespace std;
int main(){
int i,sotto6=0;
string alievi[5],ricerca;
float media[5];		
media[0]=3.56;
media[1]=5.56;	
media[2]=7.56;	
media[3]=8.56;
media[4]=9.56;
alievi[0]="mattina";
alievi[1]="allesandro";
alievi[2]="enrico";
alievi[3]="francesco";
alievi[4]="allesio";
cout<<"dimmi il nome del alievo";
cin>>ricerca;
for(i=0;i<5;i++){
if(ricerca==alievi[i]){
cout<<alievi[i]<<"la sua media è "<<media[i]<<endl;	
}	
}
for(i=0;i<5;i++){
if(media[i]<6){
sotto6++;	
cout<<"gli alievi con la media inferiore a 6 sono "<<sotto6<<endl;	
}	
}
for(i=0;i<5;i++){
if(media[i]>8){	
cout<<"il piu bravo e "<<alievi[i]<<endl;	
}	
}
}


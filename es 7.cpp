#include<iostream>
#include<math.h>
using namespace std;
int main(){
int costo,pagare;
cout<<"dimmi il costo che devo pagare";
cin>>costo;
if(costo>10000 && costo<19000)
cout<<"costo del carburante e il 10%"<<endl;
else
cout<<"non costo del carburante"<<endl;
if(costo>20000 && costo<29000)
cout<<"costo del carburante e il 8%"<<endl;
else
cout<<"non costo del carburante"<<endl;
if(costo>30000 && costo<39000)
cout<<"costo del carburante e il 6%"<<endl;
else
cout<<"non costo del carburante"<<endl;
if(costo>40000 && costo<49000)
cout<<"costo del carburante e il 4%"<<endl;
else
cout<<"non costo del carburante"<<endl;		
}


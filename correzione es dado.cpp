
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
int i,N,N2;
int daddo1[N],daddo2[N];
cout<<"dimmi il valore del daddo 1";
cin>>N;
cout<<"dimmi il valore del daddo 2";
cin>>N2;
srand(time(NULL));
for (i=0;i<N;i++){
	 daddo1[i]=rand()%6+1;	
}
srand(time(NULL));
for (i=0;i<N2;i++){
	 daddo2[i]=rand()%6+1;

cout<<"primo dado"<<endl;
	for (i=0; i<N; i++){		
		   cout<<daddo1[i]<<endl;
	}
	
	cout<<"secondo dado"<<endl;
	for (i=0; i<N2; i++){		
		   cout<<daddo2[i]<<endl;
	}


}}		

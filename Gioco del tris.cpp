#include<iostream>
#include<cstdlib>
#include<ctime>//dichiaro 3 librerie.
using namespace std;

void trisschermo(char mat[3][3]){//consente di mostrare lo schermo del tris del titolo.
cout<<"IL GIOCO TRIS "<<endl;	
int r,c;
for(r=0;r<3;r++){//metto 2 cicli for.
for(c=0;c<3;c++){
cout<<"[ ]";	
}	
cout<<endl;
}			
}
	
void stampatris(char mat[3][3]){//la funzione che consente al programma di stampare il tris.
cout<<" 0  1  2 "<<endl;// i numeri indicano le posizioni di x e y da riga a collona della matrice 3x3.
cout<<"0["<<mat[0][0]<<"]["<<mat[0][1]<<"]["<<mat[0][2]<<"]"<<endl;
cout<<"1["<<mat[1][0]<<"]["<<mat[1][1]<<"]["<<mat[1][2]<<"]"<<endl;
cout<<"2["<<mat[2][0]<<"]["<<mat[2][1]<<"]["<<mat[2][2]<<"]"<<endl;
// vittoria di X mentre fa il tris.
if(mat[0][0]=='X' and mat[0][1]=='X' and mat[0][2]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;
}
if(mat[0][0]=='X' and mat[1][1]=='X' and mat[2][2]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;
}
if(mat[0][2]=='X' and mat[1][1]=='X' and mat[2][0]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;
}
if(mat[0][0]=='X' and mat[1][0]=='X' and mat[2][0]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[2][1]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;	
}
if(mat[0][2]=='X' and mat[1][2]=='X' and mat[2][2]=='X'){
cout<<"HAI FATTO IL TRIS"<<endl;	
}
// vittoria di O mentre fa il tris.
if(mat[0][0]=='O' and mat[0][1]=='O' and mat[0][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[0][0]=='O' and mat[1][1]=='O' and mat[2][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[0][2]=='O' and mat[1][1]=='O' and mat[2][0]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[0][0]=='O' and mat[1][0]=='O' and mat[2][0]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[1][0]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[2][1]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
if(mat[0][2]=='O' and mat[1][2]=='O' and mat[2][2]=='O'){
cout<<"PC HA FATTO IL TRIS"<<endl;
}
}	
	
void facile(char mat[3][3]){// difficolta facile.
int r,c,y,x,x2,y2,cont=0,pc=0;//dichiaro le variabili per iniziare.
for(r=0;r<3;r++){//cont per contare quanto metto X e O. 
for(c=0;c<3;c++){//x e y sono variabili che utente fa il tris, e x2 e y2 sono per il programma che segue per fare il tris.
mat[r][c]=' ';//il pc indica il computer quando fa il tris inizia a fare la somma.
}
}
do{
stampatris(mat);//metto la funzone stampatris dopo che ha eseguito il ciclco postcodizionale. 	
cout<<"dimmi la le posizione per mettere la x"<<endl;
cout<<"dimmi la posizione x"<<endl;//chiedo al utente di inserire le posizioni da x e y del X.
cin>>x;
cout<<"dimmi la posizione y"<<endl;
cin>>y;
cont++;
if(mat[x][y]==' '){//verifica se il posto è libero posso mettere la X.
mat[x][y]='X';	
}
stampatris(mat);	
x2=rand()%2+0;//il programma mette le posizioni del O casualmente.
y2=rand()%2+0;
if(mat[x2][y2]==' '){//verifica se il posto è libero può mettere la O.
mat[x2][y2]='O';	
}
//verifica dopo che hai vinto si fermi il tris.
if(mat[0][0]=='X' and mat[0][1]=='X' and mat[0][2]=='X'){
cont=cont+8;
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cont=cont+8;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cont=cont+8;
}
if(mat[0][0]=='X' and mat[1][1]=='X' and mat[2][2]=='X'){
cont=cont+8;
}
if(mat[0][2]=='X' and mat[1][1]=='X' and mat[2][0]=='X'){
cont=cont+8;
}
if(mat[0][0]=='X' and mat[1][0]=='X' and mat[2][0]=='X'){
cont=cont+8;
}
if(mat[1][0]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cont=cont+8;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cont=cont+8;	
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[2][1]=='X'){
cont=cont+8;	
}
if(mat[0][2]=='X' and mat[1][2]=='X' and mat[2][2]=='X'){
cont=cont+8;	
}
//verifica che il pc sta facendo il tris.
if(mat[0][0]=='O' and mat[0][1]=='O' and mat[0][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][0]=='O' and mat[1][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][2]=='O' and mat[1][1]=='O' and mat[2][0]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][0]=='O' and mat[1][0]=='O' and mat[2][0]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[1][0]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[2][1]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][2]=='O' and mat[1][2]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
}while(cont<8);//se il contatore supera 8 significa hai finito il tris mettendo tropi X e O.
cout<<"hai finito il tris"<<endl;
if(pc==3){//se il pc ha fatto il tris fa la somma quindi vince il pc.
cout<<"IL PC HAI FATTO IL TRIS"<<endl;	
cout<<"hai perso"<<endl;	
}	
}

//difficolta normale.
void normale(char mat[3][3]){
int r,c,y,x,x2,y2,cont=0,pc=0;
for(r=0;r<3;r++){
for(c=0;c<3;c++){
mat[r][c]=' ';
}
}
do{
stampatris(mat);	
cout<<"dimmi la le posizione per mettere la x"<<endl;
cout<<"dimmi la posizione x"<<endl;
cin>>x;
cout<<"dimmi la posizione y"<<endl;
cin>>y;	
cont++;
if(mat[x][y]==' '){//faccio if e controllo quando utente ha intenzione di fare tris lo frega.
mat[x][y]='X';	
}
stampatris(mat);//verifico mentre unente ha intenzione di vincere vado a bloccare gli spazi.	
if(mat[0][0]=='X'){
x2=0;
y2=1;	
}
if(mat[0][1]=='X'){
x2=0;
y2=2;	
}
if(mat[1][0]=='X'){
x2=2;
y2=0;	
}
if(mat[1][1]=='X'){
x2=1;
y2=2;	
}
if(mat[1][0]=='X'){
x2=2;
y2=1;	
}
if(mat[2][1]=='X'){
x2=2;
y2=2;	
}
if(mat[2][2]=='X'){
x2=1;
y2=1;	
}
if(mat[x2][y2]==' '){
mat[x2][y2]='O';	
}
//verifica dopo che hai vinto si fermi il tris.
if(mat[0][0]=='X' and mat[0][1]=='X' and mat[0][2]=='X'){
cont=cont+8;
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cont=cont+8;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cont=cont+8;
}
if(mat[0][0]=='X' and mat[1][1]=='X' and mat[2][2]=='X'){
cont=cont+8;
}
if(mat[0][2]=='X' and mat[1][1]=='X' and mat[2][0]=='X'){
cont=cont+8;
}
if(mat[0][0]=='X' and mat[1][0]=='X' and mat[2][0]=='X'){
cont=cont+8;
}
if(mat[1][0]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cont=cont+8;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cont=cont+8;	
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[2][1]=='X'){
cont=cont+8;	
}
if(mat[0][2]=='X' and mat[1][2]=='X' and mat[2][2]=='X'){
cont=cont+8;	
}
//verifica che il pc sta facendo il tris.
if(mat[0][0]=='O' and mat[0][1]=='O' and mat[0][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][0]=='O' and mat[1][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][2]=='O' and mat[1][1]=='O' and mat[2][0]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][0]=='O' and mat[1][0]=='O' and mat[2][0]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[1][0]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[2][1]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][2]=='O' and mat[1][2]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
}while(cont<8);
cout<<"hai finito il tris"<<endl;
if(pc==3){
cout<<"IL PC HAI FATTO IL TRIS"<<endl;	
cout<<"hai perso"<<endl;	
}
}

//difficolta difficile.
void difficile(char mat[3][3]){
int r,c,y,x,x2,y2,pc=0,cont=0;
for(r=0;r<3;r++){
for(c=0;c<3;c++){
mat[r][c]=' ';
}
}
do{
stampatris(mat);	
cout<<"dimmi la le posizione per mettere la x"<<endl;
cout<<"dimmi la posizione x"<<endl;
cin>>x;
cout<<"dimmi la posizione y"<<endl;
cin>>y;	
cont++;
if(mat[x][y]==' '){//faccio if e controllo quando utente ha intenzione di fare tris lo frega.
mat[x][y]='X';	
}
stampatris(mat);	
if(mat[0][0]=='X'){
x2=0;
y2=1;	
}
if(mat[1][0]=='X'){
x2=2;
y2=1;	
}
if(mat[0][2]=='X'){
x2=0;
y2=1;	
}
if(mat[1][0]=='X'){
x2=1;
y2=1;	
}
if(mat[1][0]=='X'){
x2=1;
y2=2;	
}
if(mat[2][2]=='X'){
x2=1;
y2=1;	
}
if(mat[1][1]=='X'){
x2=2;
y2=2;	
}
if(mat[2][0]=='X'){
x2=2;
y2=1;	
}
if(mat[2][1]=='X'){
x2=2;
y2=0;	
}
if(mat[1][0]=='X'){
x2=2;
y2=0;	
}
if(mat[1][0]=='X'){
x2=1;
y2=2;	
if(mat[0][0]=='X'){
x2=0;
y2=1;	
if(mat[2][2]=='X'){
x2=1;
y2=1;	
if(mat[1][0]=='X'){
x2=2;
y2=0;	
}
}
}
}

if(mat[x2][y2]==' '){
mat[x2][y2]='O';	
}
//verifica dopo che hai vinto si fermi il tris.
if(mat[0][0]=='X' and mat[0][1]=='X' and mat[0][2]=='X'){
cont=cont+8;
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cont=cont+8;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cont=cont+8;
}
if(mat[0][0]=='X' and mat[1][1]=='X' and mat[2][2]=='X'){
cont=cont+8;
}
if(mat[0][2]=='X' and mat[1][1]=='X' and mat[2][0]=='X'){
cont=cont+8;
}
if(mat[0][0]=='X' and mat[1][0]=='X' and mat[2][0]=='X'){
cont=cont+8;
}
if(mat[1][0]=='X' and mat[1][1]=='X' and mat[1][2]=='X'){
cont=cont+8;	
}
if(mat[2][0]=='X' and mat[2][1]=='X' and mat[2][2]=='X'){
cont=cont+8;	
}
if(mat[0][1]=='X' and mat[1][1]=='X' and mat[2][1]=='X'){
cont=cont+8;	
}
if(mat[0][2]=='X' and mat[1][2]=='X' and mat[2][2]=='X'){
cont=cont+8;	
}
//verifica che il pc sta facendo il tris.
if(mat[0][0]=='O' and mat[0][1]=='O' and mat[0][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][0]=='O' and mat[1][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][2]=='O' and mat[1][1]=='O' and mat[2][0]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][0]=='O' and mat[1][0]=='O' and mat[2][0]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[1][0]=='O' and mat[1][1]=='O' and mat[1][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[2][0]=='O' and mat[2][1]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][1]=='O' and mat[1][1]=='O' and mat[2][1]=='O'){
cont=cont+8;
pc=pc+3;
}
if(mat[0][2]=='O' and mat[1][2]=='O' and mat[2][2]=='O'){
cont=cont+8;
pc=pc+3;
}
}while(cont<8);
cout<<"hai finito il tris"<<endl;
if(pc==3){
cout<<"IL PC HA FATTO IL TRIS"<<endl;	
cout<<"hai perso"<<endl;	
}
}
	
int main(){
int i;	
srand(time(NULL));
char mat[3][3];
int difficolta;
int cont=0;
trisschermo(mat);
cout<<"dimmi la dificolta del gioco del tris tra i segunti numeri"<<endl;
cout<<"1 facile,2 normale,3 difficile"<<endl;
cin>>difficolta;
if(difficolta==1){
facile(mat);//schegli difficolta.
}else{
cout<<"hai selezionato il numero sbagliato devi selezionare da 1 a 3 "<<endl;	
}
if(difficolta==2){
normale(mat);
}else{
cout<<"hai selezionato il numero sbagliato devi selezionare da 1 a 3 "<<endl;	
}
if(difficolta==3){
difficile(mat);
}else{
cout<<"hai selezionato il numero sbagliato devi selezionare da 1 a 3 "<<endl;	
}
}

//facile(mat);
//normale(mat);
//difficile(mat);	


//-------------------------------
//Autor: Rom�n Sanz Mart�
//Fecha: 24 Octubre 2017
//Descripci�n: Punteros
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
//-------------------------------
void g( int *p){
	(*p) = (*p) + 3;
}
//-------------------------------
int f( int *p){
	g(&(*p));
}
//-------------------------------
int main (){
	int a = 15;
	f (&a);
	cout << a << endl;
}

// Fin Programa

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
int porDos (int *p){
	return (*p) * 2;
}
int main (){
	int a = 10;
	a = porDos (&a);
	cout << a << endl;
}

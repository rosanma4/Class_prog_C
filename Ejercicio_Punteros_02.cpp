//-------------------------------
//Autor: Rom�n Sanz Mart�
//Fecha: 17 Octubre 2017
//Descripci�n: Ejercicio Punteros
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
void porDos(int *p){
	(*p) = (*p) * 2;
	}
//-------------------------------
int main (){
	int a = 5;
	cout << a << endl;
	porDos (&a);
	cout << a << endl;
	int b = 7;
	porDos (&b);
	cout << b << endl;
}

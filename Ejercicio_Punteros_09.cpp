//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 24 Octubre 2017
//Descripción: Punteros
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
//-------------------------------
void porDos(int *p1, int *p2){
	(*p2) = (*p1) * 2;
}
//-------------------------------
int main (){
	int a = 10;
	int b;
	porDos(&a , &b);
	cout << b
	 << endl;
}

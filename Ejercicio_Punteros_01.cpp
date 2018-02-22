//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 17 Octubre 2017
//Descripción: Punteros
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int main(){
	int a = 89;
	int *p;
	p = &a;
	cout << a << endl;
	*p = 20;
	cout << a << endl;
}

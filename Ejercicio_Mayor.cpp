//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 17 Octubre 2017
//Descripción: Ejercicio Mayor
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int mayor (int a, int b){
	if (a > b){
		return a;
	}
	return b;
}
int main(){
	int a;
	a = mayor(7,8);
	cout << a << endl;
}

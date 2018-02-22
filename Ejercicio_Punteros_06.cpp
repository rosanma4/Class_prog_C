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
void porDos(int a, int *p){
	(*p) = a * 2;	

}
//------------------------------
int main (){
	int a = 10;
	porDos ( a , &a);
	cout << a << endl;
}
// Fin Programa

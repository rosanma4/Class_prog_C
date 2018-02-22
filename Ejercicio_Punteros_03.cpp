//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 20 Octubre 2017
//Descripción: Ejercicio Punteros
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
void PreguntarAlUsuario(int *p){
	cout << "Dime un numero " << endl;
	cin >> (*p);	
}
//-------------------------------
int main (){
	int a = 25;
	//cout << a << endl;
	PreguntarAlUsuario(&a);
	porDos (&a);
	cout << a << endl;
}

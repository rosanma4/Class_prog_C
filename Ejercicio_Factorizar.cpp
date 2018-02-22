//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 12 Octubre 2017
//Descripción: Ejercicio Hola Mundo
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int PreguntarAlUsuario(){
	cout << "Dime un numero entero \n";
	int n;
	cin >> n;
	return n;
}
//-------------------------------
int Factorizar(int b){
	int res;
	res = b;
	for (int i = (b-1); i >= 1; i--){
	res = res * i;
	}	
	return res;
}
//--------------------------------
int main(){
	int r;
	r = PreguntarAlUsuario();
	int w;
	w = Factorizar(r);
	cout << w << endl;
}

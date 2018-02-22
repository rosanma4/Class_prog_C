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
int preguntarAlUsuario(){
	int r;
	cout << "Introduce un numero entero \n";
	cin >> r;
	return r;
}
//-------------------------------
bool AbarcaEntreLosDos(int r){
	if (r <= 10){
		return true;
		}
	else{
		return false;
		}
}
//-------------------------------
int main(){
	int r;
	r = preguntarAlUsuario();
	cout << r << endl;
	bool resp = AbarcaEntreLosDos(r);
	if (resp == true){
		cout << "SI" << endl;
		}
	else{
		cout << "NO" << endl;
	}
}

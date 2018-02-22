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
//-------------------------------
int preguntarAlUsuario(){
	int a;
	cout << "Introduce un numero Entero \n";
	cin >> a;
	return a;
}
//-------------------------------
bool esPar(int n){
	bool respuesta;
	if (n%2 == 0) {			//Si la resta de n entre 2 es igual a 0.
		respuesta = true;
	}
	else{
		respuesta = false;
	}
	return respuesta;
}
//-------------------------------
int main(){
	int q;
	q = preguntarAlUsuario ();
	bool responde;
	responde = esPar(q);
	if (responde == true){
		cout << "El numero es par" << endl;
	}
	else{
		cout << "El numero es impar" << endl;
		}	
}


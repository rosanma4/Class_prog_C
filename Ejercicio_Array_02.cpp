//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 27 Octubre 2017
//Descripción: Array
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int main (){
	const int TAM = 30;
	double sumatorio = 1;
	double lista [TAM];
	lista [0] = 0.0;
	for (int i = 1; i <= TAM -1; i++){
	lista [i] = lista [i - 1] + sumatorio;	
	}
	for (int i = 0; i <= TAM -1; i++){
		cout << lista[i] << endl;
	}
}
//Fin Programa

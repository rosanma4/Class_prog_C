//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 27 Octubre 2017
//Descripción: Función Array
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int main (){
	double lista [100];
	int cuantas = 0;
	//CONVENIO O ACUERDO
	//Utilizar Cuantas
	//Utilizar las del Principio
	lista [0] = -75;
	cuantas ++;
	cout << lista [0] << endl;
	lista [1] = 22,22;
	cuantas ++;
	
	for (int i = 0; i <= cuantas -1; i ++){
		cout << lista [i] << endl;
	}
}

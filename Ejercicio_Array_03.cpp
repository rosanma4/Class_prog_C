//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 27 Octubre 2017
//Descripción:  Array con Puntero
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int preguntarvalorTAM(){
	int TAM;
	cout << "Cuantos valores quieres introducir?";
	cin >> TAM;
	return TAM;
}

int preguntarLista(double *pL, int max){
	double valor;
	int i=0;
	for(i; i<max; i++){
		cout << " \n Da un valor: "<< i+1 <<" ";
		cin >> valor;
		pL[i] = valor;
	}
	return i;
}

int main(){
	int TAM=0;
	TAM = preguntarvalorTAM();
	double laLista[TAM];
	int k;
	k = preguntarLista(&laLista[0],TAM);
	
	cout << " \n Introducimos "<< k << " valor ";
	for(int i=0; i<TAM; i++){
		cout << " \n el valor "<< i+1 << " es: " <<laLista[i];
	}
}

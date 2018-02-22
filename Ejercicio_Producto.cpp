//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 17 Octubre 2017
//Descripción: Ejercicio Sumatorio
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int producto (int a, int b){
	int suma =  0;
	int signo = 1;
	if (a < 0){
		signo = -1;
		a = -a;
	}
	for (int i = 1; i <= a; i++){
		suma = suma + b;
	}
	return suma * signo;	
}
int main(){
	int r;
	int a = 7;
	int b = 8;
	r = producto (a,b);
	cout << r << endl;
}

//Fin Programa

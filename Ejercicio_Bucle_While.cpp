//-------------------------------
//Autor: Rom�n Sanz Mart�
//Fecha: 12 Octubre 2017
//Descripci�n: Ejercicio Hola Mundo
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
int main(){
	int i;
	i = 0;
	int cuantas;
	cout << "Cuanto se repetira? \n";
	cin >> cuantas;
	while(i<=cuantas-1){
		cout << "Hola " << endl;
		i=i+1;
	}
}

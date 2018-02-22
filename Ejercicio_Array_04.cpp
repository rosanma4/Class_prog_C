//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
const unsigned int MAX = 100;
//-------------------------------
int preguntarCuantas(){
	int a;
	cout << "dime cuantos numeros quieres guardar?" << endl;
	cin >> a;
	return a;
}
//-------------------------------
double BuscarMayor (double *pl, unsigned int cuantas){
	
}
//-------------------------------
unsigned int preguntarListaNumeros (double *pl, unsigned int max){
	unsigned int cuantas = preguntarCuantas();
	if ( cuantas > MAX ){
		cuantas = MAX;
	}
	for (int i = 0; i <= cuantas - 1 ; i++){
		cout << " dime la casilla " << i << " " ;
		cin >>  pl[i];
	}
	return cuantas;
}
//-------------------------------
int main (){
	double lista [MAX];	
	unsigned int q = preguntarListaNumeros (& lista[0],MAX);
	double mayor = BuscarMayor ( &lista[0], q);
	for (int i =0 ; i<= q-1; i++){
		cout << " casilla " << i << " == ";
		cout << lista [i] << endl;
		cout << endl;
		
	}
	cout << q << endl;
	
}


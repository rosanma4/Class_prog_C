//-------------------------------
//Autor: Rom�n Sanz Mart�
//Fecha: 20 Noviembre 2017
//Descripci�n: Programaci�n Objetos y Clases
//-------------------------------
//-------------------------------
#include<iostream>
using namespace std;
//-------------------------------
//-------------------------------
class Punto{
	private:
		double x;
		double y;
		
	public:
		Punto() {                                   //Constructor por defecto
		x = 0;
		y = 0;
		}
		
	Punto (double x1, double y1){                 // Constructor
		x = x1;                                   // (*this.x = x) x de la zona com�n
		y = y1;
	}
	double getX(){
		return x;
	}
	//-------------------------------
	double getY(){
		return y;
	}
	//-------------------------------
};
//-------------------------------
//-------------------------------
int main (){
	Punto a (3.3 , 5.5);
	double z = a.getX();
	cout << z << endl;
	double t = a.getY();
	cout << t << endl;
	
}
//-------------------------------
//-------------------------------
//Fin Programa

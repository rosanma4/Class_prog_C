//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 20 Noviembre 2017
//Descripción: Programación Objetos y Clases, Cambiar Valores.
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
		x = x1;                                   // (*this.x = x) x de la zona común
		y = y1;
	}
	double getX(){
		return x;
	}
	//-------------------------------
	void cambiaX(double x){
		(*this).x = x;
	}
	//-------------------------------
	double getY(){
		return y;
	}
	//-------------------------------
	void cambiaY(double y){
		(*this).y = y;
	}
};
//-------------------------------
//-------------------------------
int main (){
	Punto a (3.3 , 5.5);
	double z = a.getX();
	cout << z << endl;
	double t = a.getY();
	cout << t << endl;
	a.cambiaX (7.99);
	z = a.getX();
	cout << z << endl;
	a.cambiaY (11.4);
	t = a.getY();
	cout << t << endl;
	
	
}
//-------------------------------
//-------------------------------
//Fin Programa

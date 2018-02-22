//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 20 Noviembre 2017
//Descripción: Programación Objetos y Clases, Metodo Distancia entre Dos puntos 
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
	double getY(){
		return y;
	}
	//-------------------------------
	double Distancia (Punto p1){			  //Distancia en 1 punto que le entra solamente
		//necesitamos la X e Y de aqui y la X e Y de p1
		//X de "aquí"
		x;
		getX();
		(*this).x;
		(*this).getX();
		p1.x; // OK cuando sea privada porque es de mi misma clase
		//Y de "aqui"
		y;
		getY();
		(*this).y;
		(*this).getY();
		p1.y; //OK cuando sea privada porque es de mi misma clase 
		//X de p1
		p1.getX();
		//Y de p1
		p1.getY();
		
		return 12.34;
	}
};
//-------------------------------
//-------------------------------
int main (){
	Punto a (3.3 , 5.5);
	Punto b (0.0 , 0.0);
	//llamada al metodo distancia
	double d;
	d = b.Distancia ( a );	
	cout << d << endl;	
}
//-------------------------------
//-------------------------------
//Fin Programa

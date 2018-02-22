//-------------------------------
//Autor: Román Sanz Martí
//Fecha: 20 Noviembre 2017
//Descripción: Programación Objetos y Clases, Distancia entre Dos puntos
//-------------------------------
//-------------------------------
#include<iostream>
#include<math.h>
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
};
//-------------------------------
//-------------------------------
double Distancia (Punto p1, Punto p2){			  //Distancia como funcion suelta
	
	//saber la x y la y de p1 y de p2
	
	double x1 = p1.getX();
	cout << x1 << endl;
	double y1 = p1.getY();
	double x2 = p2.getX();
	double y2 = p2.getY();
	
	return 12.34;	
	
	// MAl porque p1.x es privado : x1 = p1.x;
	/*
	double dis, x , y;
	// Obetenemos la diferencia entre los puntos del eje de coordenadas x
	if (p1.getX() - p2.getX()){
		x = p1.getX() - p2.getX();
	}else{
		x = p2.getX() - p1.getX();
	}
	//OBetenemos la diferencia dentre los puntos del eje de coordenadas y 
	if (p1.getY() > p2.getY()){
		y = p1.getY() - p1.getY();
	}else{
		y = p2.getY() - p2.getY();
	}
	//Calculo de la distancia por el teorema de pitagoras
	dis= sqrt(pow(x, 2)+ pow(y, 2));
	return dis;
	*/
}
//-------------------------------
//-------------------------------
int main (){
	Punto a (3.3 , 5.5);
	Punto b (0.0 , 0.0);
	double d = Distancia (a,b);	
	cout << d << endl;		
}
//-------------------------------
//-------------------------------
//Fin Programa

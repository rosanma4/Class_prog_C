//Román Sanz Martí
//Ejercicio Polinomio Navidad

//----------------------------------

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

//----------------------------------
//------- CLASE POLINOMIO ----------
//----------------------------------

class Polinomio {
private:
	int grado; // Almacena el grado del polinomio
	double coeficientes[10]; // Almacena los coeficientes del polinomio
public:
	
	// Constructor 
    Polinomio (int g,double coef[]){
      (*this).grado = g;
      while (g >= 0){ // Alamcena los coeficientes dados
        (*this).coeficientes[g] = coef[g];
        g--;
      } 
    } 
	
	// Imprime por pantalla un polinomio
	void printPolinomio(double valores[]){
		cout << valores[0] << " + ";
		for (int i = 1;i <= (*this).grado-1; i++){
			cout << valores[i] << "x^" << i;
			if (i < (*this).grado-1){
				cout << " + ";
			} 
		}
		cout << endl;
	}
	
	// Imprime por pantalla el propio polinomio (haciendo uso de printpolinomio (); )
	void printThisPolinomio(){
		(*this).printPolinomio((*this).coeficientes);
	}
	
	// Devuelve el grado del polinomio
	int getGrado(){
		return (*this).grado;
	}
	
	// Devuelve el valor del polinomio asignandole un valor a la x
	int getValor (int num){
		int valorTotal = coeficientes[0];
		for (int i = 1;i <= (*this).grado-1; i++){
			valorTotal += (pow(num, i))*coeficientes[i];
		}
		return valorTotal;
	}
	
	// Devuelve el coeficinete pedido (mediante grado)
	int getCoeficiente (int posicion){
		return  coeficientes[posicion];
	}
	
	// Multiplica el polinomio por el numero deseado 
	void multiplicar(double num){
		double resultados[10];
		for (int i = 0;i <= (*this).grado; i++){
			resultados[i] = coeficientes[i]*num;
		}
		(*this).printPolinomio(resultados);
	}
	
	//Suma dos polinomio	
	/*sumarPolinomio(){
		
	}*/
};
//------------------------------
//------------ MAIN ------------
//------------------------------
int main(){	
	// Coeficientes del polinomio
	double coeficientes[10]={1.0,2.0,3.0};
	
	// Creamos el objeto polinomio e indicamos el grado y los coeficioentes
	Polinomio p (3,coeficientes);
	
	// Mostramos por pantalla el polinomio
	cout << "Polinomio: ";
	p.printThisPolinomio();
	
	// ¿Que grado tiene?
	cout << "¿Que grado tiene? Tiene grado: ";
	cout << p.getGrado() << endl;
	
	//Los coeficientes
	int valorCof = 2;
	cout << "El coeficiente de grado "<< valorCof << " es : ";
	cout << p.getCoeficiente(valorCof) << endl;
		
	// Asignamos valor a x (x = 2) y obtenemos valor
	double valorX = 2;
	cout << "Si x = " << valorX << ", P = ";
	cout << p.getValor(valorX) << endl;
	
	// Multiplicamos por un numero
	double valorY = 3;
	cout << "P x " << valorY << " = ";
	p.multiplicar(valorY);
}
//-------------------------------

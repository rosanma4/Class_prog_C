#include "iostream"
#include "string"

using namespace std;

int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << endl; //La instrucci�n \n es un salto de l�nea Mostrando los textos separados
   
   string nombre;//En esta variable estar� almacenado el nombre ingresado.
   cin >> nombre; //Se lee el nombre
   
   cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicaci�n" << endl;
   
   
   return 0;
}

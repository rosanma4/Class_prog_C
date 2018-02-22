#include "iostream"
#include "string"

using namespace std;

int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << endl; //La instrucción \n es un salto de línea Mostrando los textos separados
   
   string nombre;//En esta variable estará almacenado el nombre ingresado.
   cin >> nombre; //Se lee el nombre
   
   cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicación" << endl;
   
   
   return 0;
}

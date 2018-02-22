#include "iostream"
#include "string"

using namespace std;

int main()
{
    cout << "Hola! Aqui podras realizar sumas" << endl;//Mensaje de bienvenida    
    float numero1, numero2; //Se declaran los números que se sumarán (pueden ser decimales) 

    cout << "Por favor ingrese el primer valor: " << endl; //Se pide el primer numero    
    cin >> numero1; //Se asigna el primer valor a numero1
    
    cout << "Por favor ingrese el segundo valor: " << endl; //Se pide el segundo numero    
    cin >> numero2; //Se asigna el segundo valor a numero2
    
    cout << "El resultado de la suma de " << numero1 << " + " << numero2 << " es: " << numero1+numero2 << endl; //Se muestra el resultado.  
   
   return 0;
}

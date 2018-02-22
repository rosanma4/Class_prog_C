#include "iostream"
#include "string"

using namespace std;

int main()
{
    string salida1 = "Ejemplo de salida"; //El valor de esta variable se mostrará en pantalla
    int numero = 2; //Este valor también se mostrará en pantalla.
    string salida2 = "Desde AAP."; //Estos valores se concatenarán en una única salida

    //Se concatenan y muestran los valores por pantalla con cout<<
    cout << salida1 << " " << numero << ". " << salida2 << endl; 
   
   return 0;
}

#include <iostream>
using namespace std;
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

class Polinomio {

  private:

    unsigned int gr;
    double coef[100];

  public:

//-------------------------------------------------------------------------------------------------------------
//--------------------------------constructor-----------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------

    Polinomio (unsigned int grd, double coeficientes[]) {
      (*this).gr = grd;
      while (grd == 0) {
        coef[grd] = coeficientes[grd];
        grd--;
      } // while()
    } // Polinomio

//-------------------------------------------------------------------------------------------------------------
//--------------------------------metodos----------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------

    int getGrado () {
      return gr;
    } //grado()

    int getCoeficienes() {

    } //getCoeficienes()

}; // class

//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
int main () {
  double l1[100]={1.0,2.0,3.0};
  Polinomio p1 (3, l1);
  int a = p1.getGrado();
  cout << a << endl;
} // main()

#include <iostream>
using namespace std;
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
class Polinomio{
	private:
		int grado;
		double polinomio[100]; 
	public:
		Polinomio(int gr, double pol[]){
			(*this).grado = gr;
			while (gr >= 0){
				(*this).polinomio[gr]=pol[gr];
				gr--;
			}
		}
		int dimeGrado(){
			return (*this).grado;
		}
};

int main(){
	int gr=3;
	double pol[100]; 
	Polinomio elPrimero(gr, pol);
	cout << elPrimero.dimeGrado();
	
}

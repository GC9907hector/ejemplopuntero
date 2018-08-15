#include <iostream>
using namespace std;

int arreglo[10]={1,2,3,4,5,6,7,8,9,10};
int *puntero;
int suma=0;

int main(){
	puntero=&arreglo[0];
	for(int i=0; i<10; i++){
		cout << puntero << endl;
		suma=suma+*puntero;
		*puntero++;
	}
	cout << "la suma es: " << suma << endl;
	cout << "el promedio es" << suma/10 << endl;
	return 0;
}

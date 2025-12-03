#include <iostream>
using namespace std;
int main() {
	
	double suma;
	int Polje[5];
	
	for (int i = 0; i <5; i++){
		cout << "Upisite broj " << i + 1 << ": ";
		cin >> Polje[i];
		suma += Polje[i];
	}
	
	double pros = suma/5;
	
	cout << "Suma brojeva iznosi: " << suma << " a prosjecna vrijednost iznosi: " << pros;
	

	return 0;
}
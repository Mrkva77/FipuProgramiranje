#include <iostream>
using namespace std;
int main() {
	
	int Polje[5];
	
	for (int i = 0; i <5; i++){
		cout << "Upisite broj " << i + 1 << ": ";
		cin >> Polje[i];
	}
	
	    cout << "Uneseni elementi su: ";
    for(int i = 0; i < 5; i++) {
        cout << Polje[i] << " ";
    }
    
	return 0;
}
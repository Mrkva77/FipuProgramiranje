#include <iostream>
#include <cmath>
using namespace std;

	struct Student{
		char ime[20];
		int kol;
	};
	
int main() {
		
		struct Student studenti[5];
		
		for (int i = 0; i <5; i++){
		cout << "Upisite ime studenta: " << endl;
		cin >> studenti[i].ime;
		
		cout << "Upisite postotak kolokvija studenta: " << endl;
		cin >> studenti[i].kol;

	}
	
	for (int i = 0; i < 5; i++){
		if(studenti[i].kol >= 50){
			cout << studenti[i].ime << endl;
		}
	}

	return 0;
}
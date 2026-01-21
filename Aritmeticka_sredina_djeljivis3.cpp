#include <iostream>
using namespace std;

int main()
{
    int* n = new int;
    int* sum = new int(0);
    int* j = new int(0);
    int* i = new int(0);

	for( ;*i < 5; (*i)++){
		cout << "unesite jedan cjeli broj n: " << endl;
		cin >> *n;
		
		if (*n % 3 == 0){
			(*sum) += *n;
			 (*j)++;
		}
	}

		
        float Art = (*sum) / *j;
        
        cout << "Suma brojeva djeljivih s 3 iznosi: " << *sum << endl;
        cout << "Aritmeticka sredina brojeva koji su djeljivi s 3 iznosi: " << Art << endl;

    delete n;
    delete sum;
    delete j;
    delete i;

    return 0;
}
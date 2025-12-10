#include <iostream>
using namespace std;

int main() {
    int n;

    // Unos broja n
    cout << "Unesite broj elemenata niza: ";
    cin >> n;

    int a[n];    // niz a
    int b[n];    // niz b (max n elemenata)
    int br = 0;  // brojač elemenata za niz b

    // Unos niza a
    cout << "Unesite elemente niza a:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 3 == 0) {   // ako je djeljiv s 3, ide u b
            b[br] = a[i];
            br++;
        }
    }

    // Ispis niza a
    cout << "Niz a: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Ispis niza b
    cout << "Niz b: ";
    for (int i = 0; i < br; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}

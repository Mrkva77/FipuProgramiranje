#include <iostream>
#include <string>

using namespace std;

// Funkcija koja prima riječ i vraća broj slova 'a' i 'o'
int brojiZnakove(string rijec) {
    int brojac = 0;

    // Prolazimo kroz svako slovo u riječi
    for (int i = 0; i < rijec.length(); i++) {
        // Provjeravamo je li trenutno slovo 'a' ILI 'o'
        if (rijec[i] == 'a' || rijec[i] == 'o') {
            brojac++;
        }
    }
    
    return brojac;
}

int main() {
    string unos;

    cout << "Unesite jednu rijec: ";
    cin >> unos;

    // Pozivamo funkciju i spremamo rezultat
    int rezultat = brojiZnakove(unos);

    cout << "Ukupan broj slova 'a' i 'o' u rijeci je: " << rezultat << endl;

    return 0;
}
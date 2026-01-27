#include <iostream>
#include <fstream> // Obavezno za rad s datotekama
#include <string>

using namespace std;

int main() {
    // 1. Deklaracija varijabli za čuvanje podataka
    string marka;
    string model;
    int godina;

    // 2. Otvaranje ulazne datoteke (za čitanje)
    ifstream ulaz("vozila.txt");

    // Provjera je li datoteka uspješno otvorena
    if (!ulaz.is_open()) {
        cout << "Greska: Ne mogu otvoriti datoteku 'vozila.txt'!" << endl;
        return 1; // Prekid programa s greškom
    }

    // 3. Otvaranje izlazne datoteke (za pisanje)
    ofstream izlaz("izvjestaj.txt");

    // Provjera izlazne datoteke
    if (!izlaz.is_open()) {
        cout << "Greska: Ne mogu stvoriti datoteku 'izvjestaj.txt'!" << endl;
        return 1;
    }

    // 4. Glavna petlja: Čitamo redom (Marka, Model, Godina)
    // Petlja se vrti sve dok uspješno učitava podatke
    while (ulaz >> marka >> model >> godina) {
        
        // Provjeravamo uvjet zadatka
        if (godina < 2010) {
            // Ako je uvjet ispunjen, pišemo u izlaznu datoteku
            izlaz << marka << " " << model << " " << godina << endl;
        }
    }

    // 5. Zatvaranje datoteka i poruka o uspjehu
    ulaz.close();
    izlaz.close();

    cout << "Gotovo! Provjerite datoteku 'izvjestaj.txt'." << endl;

    return 0;
}
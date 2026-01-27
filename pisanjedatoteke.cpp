#include <iostream>
#include <fstream> // Biblioteka nužna za rad s datotekama
#include <string>

using namespace std;

int main() {
    string ime, prezime, telefon;

    // 1. Unos podataka od korisnika
    cout << "Unesite ime: ";
    cin >> ime;
    
    cout << "Unesite prezime: ";
    cin >> prezime;
    
    cout << "Unesite telefonski broj: ";
    cin >> telefon;

    // 2. Otvaranje datoteke
    // ofstream koristimo za ispis u datoteku.
    // Drugi argument "ios::app" znači "append" (dodaj na kraj).
    ofstream datoteka("kontakti.txt", ios::app);

    // 3. Provjera je li datoteka uspješno otvorena
    if (datoteka.is_open()) {
        // Zapisujemo podatke odvojene razmakom i na kraju stavljamo endl za novi red
        datoteka << ime << " " << prezime << " " << telefon << endl;
        
        // Zatvaramo datoteku nakon pisanja (dobra praksa)
        datoteka.close();
        
        cout << "Podaci su uspjesno dodani u datoteku 'kontakti.txt'." << endl;
    } else {
        cout << "Greska: Nije moguce otvoriti datoteku!" << endl;
    }

    return 0;
}
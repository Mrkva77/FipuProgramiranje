#include <iostream>
using namespace std;

int main() {
    int n;

    // Unos broja dana uz provjeru
    do {
        cout << "Unesite broj dana [1-365]: ";
        cin >> n;
    } while (n < 1 || n > 365);

    // Polje za temperature
    float temp[365];

    // Unos temperatura
    for (int i = 0; i < n; i++) {
        cout << "Unesite temperaturu za dan " << i + 1 << ": ";
        cin >> temp[i];
    }

    int izbor;

    // Izbornik
    do {
        cout << "\n--- IZBORNIK ---\n";
        cout << "1 - Ispis temperature za odredjeni dan\n";
        cout << "2 - Ispis prosjecne temperature\n";
        cout << "3 - Kraj programa\n";
        cout << "Odabir: ";
        cin >> izbor;

        switch (izbor) {
            case 1: {
                int dan;
                cout << "Unesite dan [1-" << n << "]: ";
                cin >> dan;

                if (dan >= 1 && dan <= n) {
                    cout << "Temperatura za dan " << dan << " je: " << temp[dan - 1] << "°C\n";
                } else {
                    cout << "Neispravan dan!\n";
                }
                break;
            }

            case 2: {
                float suma = 0;
                for (int i = 0; i < n; i++) {
                    suma += temp[i];
                }
                cout << "Prosjecna temperatura je: " << suma / n << "°C\n";
                break;
            }

            case 3:
                cout << "Zavrsavanje programa...\n";
                break;

            default:
                cout << "Neispravan odabir!\n";
        }

    } while (izbor != 3);

    return 0;
}

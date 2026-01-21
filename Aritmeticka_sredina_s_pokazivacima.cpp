#include <iostream>
using namespace std;

int main()
{
    float* broj = new float;
    float* sum = new float(0);
    int* i = new int(0);

    do {
        cout << "Za prekid unosa unesite -1: " << endl;
        cout << "Unesite jedan realni broj: " << endl;
        cin >> *broj;

        if (*broj != -1) {
            *sum += *broj;
            (*i)++;
        }

    } while (*broj != -1);

        float Art = *sum / *i;
        cout << "Aritmeticka sredina iznosi: " << Art << endl;

    delete broj;
    delete sum;
    delete i;

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

struct Vozilo {
    string naziv;
    string gorivo;
    int brzina;
};

int main() {
    int n;
    Vozilo vozilo[100];
    
    do{
        cout << "Unesite količinu vozila koje će te unijeti u rasponu od [1-100]" << endl;
        cin >> n;
    } while(n < 1 || n > 100);
    
    for(int i = 0; i < n; i ++){
        cout << "Unesite ime " << i+1 << ". vozila: " << endl;
        cin >> vozilo[i].naziv;
        
        cout << "Unesite tip goriva koje " << i+1 << ". vozilo koristi: " << endl;
        cin >> vozilo[i].gorivo;
        
        cout << "Unesite brzinu u km/h " << i+1 << ". vozila: " << endl;
        cin >> vozilo[i].brzina;
    }

    int max = 0;

    for(int i = 0; i < n; i++){
        if(vozilo[i].brzina > vozilo[max].brzina){
            max = i;
        }
    }
    
    cout << "Najbrze vozilo je " << vozilo[max].naziv << endl;
    
    return 0;
}
#include <iostream>
using namespace std;


void esPrimo(int numero) {
    bool primo = true; 

    if (numero <= 1) {
        primo = false; 
    } else {
        
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = false; 
                break; 
            }
        }
    }

  
    if (primo) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }
}

int main() {
    int numero;

    
    cout << "Ingresa un numero: ";
    cin >> numero;

    
    esPrimo(numero);

    return 0;
}


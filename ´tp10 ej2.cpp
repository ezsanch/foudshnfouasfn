#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;
int generarNumeroAleatorio(int inicio, int fin) {
    return inicio + rand() % (fin - inicio + 1);
}

int main() {
    int inicio, fin, cantidad;
    cout<< "Ingresa el valor inicial del rango: ";
    cin>> inicio;

    cout<< "Ingresa el valor final del rango: ";
    cin>> fin;

 

    
    srand(time(0));

   
    for (int i = 0; i < cantidad; i++) {
        int numero = generarNumeroAleatorio(inicio, fin);
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}


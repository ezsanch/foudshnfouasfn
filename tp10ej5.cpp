#include <iostream>
using namespace std;


double convertirMoneda(double cantidad, string origen, string destino) {
    double tasaCambio;

    
    if (origen == "USD" && destino == "EUR") {
        tasaCambio = 0.85; 
    } else if (origen == "USD" && destino == "MXN") {
        tasaCambio = 20; 
    } else if (origen == "EUR" && destino == "USD") {
        tasaCambio = 1.18; 
    } else if (origen == "EUR" && destino == "MXN") {
        tasaCambio = 20 / 0.85; 
    } else if (origen == "MXN" && destino == "USD") {
        tasaCambio = 0.05; 
    } else if (origen == "MXN" && destino == "EUR") {
        tasaCambio = 0.05 * 0.85; 
    } else {
        tasaCambio = 1; 
    }

    return cantidad * tasaCambio;
}

int main() {
    double cantidad;
    string origen, destino;

    cout << "Ingresa la cantidad a convertir: ";
    cin >> cantidad;
    
    cout << "Ingresa la moneda de origen (USD, EUR, MXN): ";
    cin >> origen;
    
    cout << "Ingresa la moneda de destino (USD, EUR, MXN): ";
    cin >> destino;

    
    double resultado = convertirMoneda(cantidad, origen, destino);

    cout << cantidad << " " << origen << " equivale a " << resultado << " " << destino << "." << endl;

    return 0;
}


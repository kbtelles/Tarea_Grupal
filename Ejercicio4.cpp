#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario el n�mero para la tabla de multiplicar
    cout << "Ingresa un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;

    // Mostrar la tabla de multiplicar del n�mero
    cout << "Tabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}


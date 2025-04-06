#include <iostream>
using namespace std;

void verificarParImpar() {
    int n;

    cout << "* NO SE ACEPTAN NUMEROS DECIMALES *" << endl;
    cout << "Cual es el numero del que desea saber si es par o impar" << endl;
    cout << "Por favor ingrese el numero: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El numero ingresado " << n << " es par." << endl;
    } else {
        cout << "El numero ingresado " << n << " es impar." << endl;
    }
}



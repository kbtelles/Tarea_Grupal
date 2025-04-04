#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "Elija una figura para dibujar:\n";
    cout << "1. Cuadrado\n";
    cout << "2. Triangulo\n";
    cout << "3. Rectangulo\n";
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        int medida;
        cout << "Ingrese la medida del cuadrado: ";
        cin >> medida;

        for (int i = 0; i < medida; i++) {
            for (int j = 0; j < medida; j++) {
                cout << "* "; 
            }
            cout << endl; 
        }
    }
    else if (opcion == 2) {
        int medida;
        cout << "Ingrese la medida del triangulo: ";
        cin >> medida;

        for (int i = 1; i <= medida; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* "; 
            }
            cout << endl; 
        }
    }
    else if (opcion == 3) {
        int largo, ancho;
        cout << "Ingrese el largo del rectangulo: ";
        cin >> largo;
        cout << "Ingrese el ancho del rectangulo: ";
        cin >> ancho;

        for (int i = 0; i < largo; i++) {
            for (int j = 0; j < ancho; j++) {
                cout << "* "; 
            }
            cout << endl; 
        }
    }
    else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}



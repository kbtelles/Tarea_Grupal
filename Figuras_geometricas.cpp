#include <iostream>
using namespace std;

void dibujarCuadrado() {
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

void dibujarTriangulo() {
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

void dibujarRectangulo() {
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




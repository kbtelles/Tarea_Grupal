#include <iostream>
using namespace std;

// Declaración de la función
void analizarNumeros(int numero);

/* Se elimina para k funcione el menu
int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // Llamada a la función
    analizarNumeros(numero);  // Se llama a la función 'analizarNumeros' y pasa el número ingresado como argumento

    return 0;
} */

// Definición de la función
void analizarNumeros(int numero) {
    for (int a = 1; a <= numero; a++) {
        if (a % 2 == 0) {
            cout << a << " es un numero par" << endl;
        } else {
            cout << a << " es un numero impar" << endl;
        }
    }
}

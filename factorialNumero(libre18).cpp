// para calcular la factorial de un numero
/*#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int numero;

    cout << "Ingresa un numero para calcular su factorial: ";
    cin >> numero;  // Le pedimos al usuario que ingrese un número

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    }

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base: factorial de 0 es 1
    } else {
        return n * factorial(n - 1);  // Caso recursivo
    }
}*/
#include <iostream>
using namespace std;

// Declaración de la función para calcular el factorial
int factorial(int n);

int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base: factorial de 0 es 1
    } else {
        return n * factorial(n - 1);  // Caso recursivo
    }
}


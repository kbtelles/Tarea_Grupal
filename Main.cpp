#include "Ejercicio1.cpp"
#include "Ejercicio4.cpp"
#include "Ejercicio6.cpp"
#include "palindromo.cpp"
#include "hipotenusa.cpp"
#include "promedio.cpp" 
#include "paridad_numero_positivo.cpp"
#include "Tablas_multiplicar.cpp"
#include "Decimal_binario.cpp"
#include "Decimal_hexadecimal.cpp"
#include "Figuras_geometricas.cpp"
#include "conversion5.cpp"  // Incluir el archivo donde está la función convertirARomanos
#include "cajeroAutomatico15.cpp"  // Incluir el archivo del cajero automático
#include "factorialNumero(libre18).cpp"  // Incluir el archivo del factorial
#include "sumaElementos(libre19).cpp"  // Incluir el archivo de la suma de elementos

#include <iostream>

using namespace std;

// Declaración de las funciones del archivo operaciones.cpp
void operacionesBasicas();
void mostrarTablaMultiplicar();
string convertirANumeroEnLetras(int num);
void ejecutarPalindromo();
void calcularHipotenusa(); 
void calcularPromedio(); 
void analizarNumeros(int numero);
void generarTablas();
void decimal_binario(int num);
void decimal_hexadecimal(int num);
void dibujarCuadrado();
void dibujarTriangulo();
void dibujarRectangulo();

string convertirUnidad(int num);
string convertirDecenas(int num);
string convertirCentenas(int num);
string convertirParteEntera(int num);
string convertirParteDecimal(int num);
string convertirANumeroConDecimalEnLetras(float num);

int main() {
    int opcion;
    int numero;
    char continuar;
    int vec[100], tam;

    do {
        // Mostrar el menú
        cout << "===============================" << endl;
        cout << "Seleccione el programa que desea ejecutar:" << endl;
        cout << "1. Operaciones Basicas (Suma, Resta, Multiplicacion, Division)" << endl;
        cout << "4. Verificar si una palabra/frase es palindromo" << endl; 
        cout << "5. Convertir un numero a romano." << endl;
        cout << "6. Convertir un numero a palabras (entre 0 y 999)" << endl;
        cout << "8. Mostrar la tabla de multiplicar de un numero" << endl;
        cout << "9. Mostrar todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "11. Convertir un numero decimal a binario." << endl; 
        cout << "12. Convertir un numero decimal a hexadecimal." << endl;
        cout << "13. Dibujar una figura geometrica (Cuadrado, Triangulo, Rectangulo)." << endl;
        cout << "15. Acceder al Cajero Automatico" << endl;  // Nueva opción para el Cajero
        cout << "16. Calcular la hipotenusa de un triangulo." << endl;
        cout << "17. Calcular el promedio de notas de un estudiante." << endl;
        cout << "18. Calcular el factorial de un numero" << endl;  // Nueva opción para el factorial
        cout << "19. Calcular la suma de los elementos de un arreglo" << endl;  // Nueva opción para la suma
        cout << "20. Verificar la paridad de un numero entero positivo." << endl;
        cout << "Ingrese el numero correspondiente al programa: ";
        cin >> opcion;

        // Ejecutar el programa correspondiente según la opción seleccionada
        switch (opcion) {
            case 1:
                operacionesBasicas();  // Llamar a la función de operaciones básicas
                break;

            case 4:
                cin.ignore(); // Para limpiar el buffer antes de getline
                ejecutarPalindromo();
                break;

            case 5:
                // Solicitar al usuario un número para convertir a romano
                cout << "Ingresa un numero para convertir a romano: ";
                cin >> numero;
                
                // Validar el número ingresado
                if (numero >= 1) {
                    cout << "El numero " << numero << " en romano es: " << convertirARomanos(numero) << endl;
                } else {
                    cout << "Por favor ingresa un número mayor o igual a 1." << endl;
                }
                break;

            case 6:
                // Solicitar al usuario un número
                cout << "Ingresa un numero entre 0 y 999: ";
                cin >> numero;

                // Validar el rango
                if (numero < 0 || numero > 999) {
                    cout << "Numero fuera de rango, por favor ingresa un numero entre 0 y 999." << endl;
                } else {
                    // Convertir y mostrar el número en letras
                    cout << "El numero " << numero << " en letras es: " << convertirANumeroEnLetras(numero) << endl;
                }
                break;

            case 8:
                mostrarTablaMultiplicar(); 
                break;

            case 9:
                generarTablas();
                break;

            case 11:
                cout << "Ingresa un numero decimal: ";
                cin >> numero;
                decimal_binario(numero);
                break;

            case 12:
                cout << "Ingresa un numero decimal: ";
                cin >> numero;
                decimal_hexadecimal(numero);
                break;

            case 13:
                int figura;
                cout << "Elija una figura para dibujar:\n";
                cout << "1. Cuadrado\n";
                cout << "2. Triangulo\n";
                cout << "3. Rectangulo\n";
                cout << "Opcion: ";
                cin >> figura;

                if (figura == 1) {
                    dibujarCuadrado();
                } else if (figura == 2) {
                    dibujarTriangulo();
                } else if (figura == 3) {
                    dibujarRectangulo();
                } else {
                    cout << "Opcion no valida." << endl;
                }
                break;

            case 15:  // Llamar al Cajero Automático
                cajeroAutomatico();  // Llamar la función del Cajero
                break;

            case 16: 
                cin.ignore(); 
                calcularHipotenusa();
                break;

            case 17:  
                cin.ignore();
                calcularPromedio();
                break;

            case 18:
                // Solicitar al usuario un número para calcular su factorial
                cout << "Ingresa un numero para calcular su factorial: ";
                cin >> numero;

                if (numero < 0) {
                    cout << "El factorial no está definido para números negativos." << endl;
                } else {
                    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
                }
                break;

            case 19:
                pedirDatos(vec, tam);  // Llamamos a la función para pedir los datos
                cout << "\nLa suma es: " << calcularSuma(vec, tam) << endl;  // Llamamos a la función para calcular la suma
                break;

            case 20:
                cout << "Ingrese un numero entero positivo: ";
                cin >> numero;
                analizarNumeros(numero);
                break;

            default:
                cout << "Opción no valida." << endl;
                break;
        }

        cout << "\nDeseas seguir operando? (s/n): ";
        cin >> continuar;

    } while ((continuar == 's' || continuar == 'S') && opcion != 2);

    return 0;
}


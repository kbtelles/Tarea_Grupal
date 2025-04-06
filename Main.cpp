// main.cpp
#include "Ejercicio1.cpp"
#include "Ejercicio4.cpp"
#include "Ejercicio6.cpp"
//#include "Ejercicio7.cpp"
#include <iostream>

// Declaración de la función del archivo operaciones.cpp
void operacionesBasicas();
void mostrarTablaMultiplicar();
string convertirANumeroEnLetras(int num);

string convertirUnidad(int num);
string convertirDecenas(int num);
string convertirCentenas(int num);
string convertirParteEntera(int num);
string convertirParteDecimal(int num);
string convertirANumeroConDecimalEnLetras(float num);
int main() {
    int opcion;
	int numero;
    // Mostrar el menú
    cout << "Seleccione el programa que desea ejecutar:" << endl;
    cout << "1. Operaciones Basicas (Suma, Resta, Multiplicacion, Division)" << endl;
    cout << "6. Convertir un numero a palabras (entre 0 y 999)" << endl;
    //cout << "7. Convertir un numero con decimales a palabras" << endl;
    cout << "8. Mostrar la tabla de multiplicar de un numero" << endl;
    cout << "Ingrese el numero correspondiente al programa: ";
    cin >> opcion;

    // Ejecutar el programa correspondiente según la opción seleccionada
    switch (opcion) {
        case 1:
            operacionesBasicas();  // Llamar a la función de operaciones básicas
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
            /*
            case 7:
            ccout << "Ingresa un numero con decimales (por ejemplo, 654.68): ";
            cin >> numero;
            cout << "El numero " << numero << " en letras es: " << convertirANumeroConDecimalEnLetras(numero) << endl;
            */
            case 8:
             mostrarTablaMultiplicar(); 
       	 break;
       	 
    	default:
      		  cout << "Opcion no valida." << endl;
        	break;
}
        
    

    return 0;
}


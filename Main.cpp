// main.cpp
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

//#include "Ejercicio7.cpp"
#include <iostream>

// Declaración de la función del archivo operaciones.cpp
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
    // Mostrar el menú
    cout << "Seleccione el programa que desea ejecutar:" << endl;
    cout << "1. Operaciones Basicas (Suma, Resta, Multiplicacion, Division)" << endl;
    cout << "4. Verificar si una palabra/frase es palindromo" << endl; 
    cout << "6. Convertir un numero a palabras (entre 0 y 999)" << endl;
    //cout << "7. Convertir un numero con decimales a palabras" << endl;
    cout << "8. Mostrar la tabla de multiplicar de un numero" << endl;
    cout << "9. Mostrar todas las tablas de multiplicar del 1 al 10" << endl;
    cout << "11. Convertir un numero decimal a binario." << endl; 
    cout << "12. Convertir un numero decimal a hexadecimal." << endl;
    cout << "13. Dibujar una figura geometrica (Cuadrado, Triangulo, Rectangulo)." << endl;
    cout << "16. Calcular la hipotenusa de un triangulo." << endl;
    cout << "17. Calcular el promedio de notas de un estudiante." << endl;
    cout << "20. Verificar la paridad de un numero entero positivo."<<endl;
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
       	    
       	    case 16: 
            cin.ignore(); 
            calcularHipotenusa();
            break;
       	 
       	    case 17:  
            cin.ignore();
            calcularPromedio();
            break;

            case 20:
            cout << "Ingrese un numero entero positivo: ";
            cin >> numero;
            analizarNumeros(numero);
            break;
            
        
       	 
    	default:
      		  cout << "Opcion no valida." << endl;
        	break;
}
        
    

    return 0;
}


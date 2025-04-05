#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Función para convertir los números del 1 al 19
string convertirUnidad(int num) {
    switch (num) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        case 10: return "diez";
        case 11: return "once";
        case 12: return "doce";
        case 13: return "trece";
        case 14: return "catorce";
        case 15: return "quince";
        case 16: return "dieciséis";
        case 17: return "diecisiete";
        case 18: return "dieciocho";
        case 19: return "diecinueve";
        default: return "";
    }
}

// Función para convertir decenas
string convertirDecenas(int num) {
    switch (num) {
        case 2: return "veinte";
        case 3: return "treinta";
        case 4: return "cuarenta";
        case 5: return "cincuenta";
        case 6: return "sesenta";
        case 7: return "setenta";
        case 8: return "ochenta";
        case 9: return "noventa";
        default: return "";
    }
}

// Función para convertir centenas
string convertirCentenas(int num) {
    switch (num) {
        case 1: return "cien";
        case 2: return "doscientos";
        case 3: return "trescientos";
        case 4: return "cuatrocientos";
        case 5: return "quinientos";
        case 6: return "seiscientos";
        case 7: return "setecientos";
        case 8: return "ochocientos";
        case 9: return "novecientos";
        default: return "";
    }
}

// Función para convertir la parte entera a letras
string convertirParteEntera(int num) {
    if (num == 0) return "cero";
    if (num < 20) return convertirUnidad(num);

    string resultado = "";

    // Verificar centenas
    if (num >= 100) {
        int centenas = num / 100;
        resultado += convertirCentenas(centenas) + " ";
        num %= 100;
    }

    // Verificar decenas
    if (num >= 20) {
        int decenas = num / 10;
        resultado += convertirDecenas(decenas) + " ";
        num %= 10;
    }

    // Verificar unidades
    if (num > 0) {
        resultado += convertirUnidad(num);
    }

    // Retirar el espacio extra al final
    return resultado;
}

// Función para convertir la parte decimal a letras
string convertirParteDecimal(int num) {
    string resultado = "";
    while (num > 0) {
        int unidad = num % 10;
        resultado = convertirUnidad(unidad) + " " + resultado;
        num /= 10;
    }
    return resultado;
}

// Función principal para convertir el número con decimales a letras
string convertirANumeroConDecimalEnLetras(float num) {
    // Separar la parte entera y la parte decimal
    int parteEntera = static_cast<int>(num);
    int parteDecimal = static_cast<int>((num - parteEntera) * 100);  // Tomamos hasta 2 decimales

    string resultado = convertirParteEntera(parteEntera) + " punto ";

    // Convertir la parte decimal
    if (parteDecimal > 0) {
        resultado += convertirParteDecimal(parteDecimal);
    } else {
        resultado += "cero";
    }

    return resultado;
}

int main() {
    float numero;

    // Solicitar al usuario un número con decimales
    cout << "Ingresa un numero con decimales (por ejemplo, 654.68): ";
    cin >> numero;

    // Convertir y mostrar el número en letras
    cout << "El numero " << numero << " en letras es: " << convertirANumeroConDecimalEnLetras(numero) << endl;

    return 0;
}


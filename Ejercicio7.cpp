// convertirNumeroConDecimales.cpp
#include <iostream>
#include <string>
using namespace std;

// Funciones de conversión (declaradas y definidas aquí)
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

string convertirParteEntera(int num) {
    if (num == 0) return "cero";
    if (num < 20) return convertirUnidad(num);

    string resultado = "";

    if (num >= 100) {
        int centenas = num / 100;
        resultado += convertirCentenas(centenas) + " ";
        num %= 100;
    }

    if (num >= 20) {
        int decenas = num / 10;
        resultado += convertirDecenas(decenas) + " ";
        num %= 10;
    }

    if (num > 0) {
        resultado += convertirUnidad(num);
    }

    return resultado;
}

string convertirParteDecimal(int num) {
    string resultado = "";
    while (num > 0) {
        int unidad = num % 10;
        resultado = convertirUnidad(unidad) + " " + resultado;
        num /= 10;
    }
    return resultado;
}

string convertirANumeroConDecimalEnLetras(float num) {
    int parteEntera = static_cast<int>(num);
    int parteDecimal = static_cast<int>((num - parteEntera) * 100); // Hasta 2 decimales

    string resultado = convertirParteEntera(parteEntera) + " punto ";

    if (parteDecimal > 0) {
        resultado += convertirParteDecimal(parteDecimal);
    } else {
        resultado += "cero";
    }

    return resultado;
}


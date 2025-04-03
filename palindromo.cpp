#include <iostream>
using namespace std;

string quitarEspacios(string palabra) {
    string palabrasSinEspacios;
    
    for (int i = 0; i < palabra.length(); i++) {
        if (palabra[i] != ' ') {
            palabrasSinEspacios += palabra[i];
        }
    }
    return palabrasSinEspacios;
}

bool EsPalindromo(string palabra) {
    int a = 0, b = palabra.length() - 1;
    
    while (a < b) {
        if (tolower(palabra[a]) != tolower(palabra[b])) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

bool EsNumero(string palabra) {
    for (char c : palabra) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main(void) {
    string entrada, entradaSinEspacios;
    
    cout << "Ingrese una palabra/frase o numero: ";
    getline(cin, entrada);
    
    entradaSinEspacios = quitarEspacios(entrada);
    
    
    if (EsPalindromo(entradaSinEspacios)) {
        cout << "SI es palindromo." << endl;
    } else {
        cout << "NO es palindromo." << endl;
    }
}


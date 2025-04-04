#include <iostream>
using namespace std;

void decimal_binario(int num) {
    if (num == 0) {
        cout << "0";
        return;
    }
    string binario = "";

    while (num > 0) {
        binario = to_string(num % 2) + binario;
        num = num / 2;
    }

    cout << "El numero binario es: " << binario << endl;
}

int main() {
    int numero_decimal;

    cout << "Introduce un numero decimal: ";
    cin >> numero_decimal;

    decimal_binario(numero_decimal);

    return 0;
}


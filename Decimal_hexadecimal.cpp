#include <iostream>
using namespace std;

void decimal_hexadecimal(int num) {
    cout << "El numero hexadecimal es: " << std::hex << num << endl;
}

int main() {
    int numero_decimal;

    cout << "Introduce un numero decimal: ";
    cin >> numero_decimal;
    
    decimal_hexadecimal(numero_decimal);

    return 0;
}


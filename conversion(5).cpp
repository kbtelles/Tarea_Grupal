#include <iostream>

using namespace std;

string convertirARomanos(int num) {
    string resultado = "";

    // Mapeo de los valores romanos con los números arábigos
    pair<int, string> valores[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    // Iterar sobre los valores romanos de mayor a menor
    for (auto& par : valores) {
        while (num >= par.first) {
            resultado += par.second; // Agregar el símbolo romano
            num -= par.first;        // Restar el valor del número
        }
    }

    return resultado;
}

int main() {
    int numero;
    char continuar;
     do {cout << "FAVOR DE INGRESAR UN NUMERO: ";
    cin >> numero;

    if (numero >= 1) {
        cout << "El numero ingresado es:" << numero << " y en numero romanos es igual a: " << convertirARomanos(numero) << endl;
    } else {
        cout << "Por favor, introduce un número mayor o igual a 1." << endl;
    }
    	cout<<""<<endl;
    cout<<"Deseas Seguir Operando? (si/no):";
    cin>>continuar;
    
	}while (continuar== 's' || continuar == 'S');
	
	cout<<"_____________________________________________________"<<endl;
	cout<<"Gracias por usar el programa.¡Hasta Pronto!"<<endl;

    return 0;
    system("pause");
}

#include <iostream>
using namespace std;

void conversiones() {
    int n;
    double datos, res;
    char r;

    do {
        cout << "________________ Conversiones __________________" << endl;
        cout << "Elija la opcion que desea utilizar:" << endl;
        cout << "1. Kilometros a millas" << endl;
        cout << "2. Metros a pulgadas" << endl;
        cout << "3. Libras a kilos" << endl;
        cout << "4. Millas a kilometros" << endl;
        cout << "5. Pulgadas a metros" << endl;
        cout << "6. Kilos a libras" << endl;
        cin >> n;

        system("cls");

        switch (n) {
            case 1:
                cout << "---- Kilometros a millas ----" << endl;
                cout << "Ingrese la cantidad de kilometros: ";
                cin >> datos;
                res = datos * 0.621371;
                cout << datos << " kilometros son " << res << " millas." << endl;
                break;

            case 2:
                cout << "---- Metros a pulgadas ----" << endl;
                cout << "Ingrese la cantidad de metros: ";
                cin >> datos;
                res = datos * 39.3701;
                cout << datos << " metros son " << res << " pulgadas." << endl;
                break;

            case 3:
                cout << "---- Libras a kilos ----" << endl;
                cout << "Ingrese la cantidad de libras: ";
                cin >> datos;
                res = datos * 0.453592;
                cout << datos << " libras son " << res << " kilos." << endl;
                break;

            case 4:
                cout << "---- Millas a kilometros ----" << endl;
                cout << "Ingrese la cantidad de millas: ";
                cin >> datos;
                res = datos * 1.60934;
                cout << datos << " millas son " << res << " kilometros." << endl;
                break;

            case 5:
                cout << "---- Pulgadas a metros ----" << endl;
                cout << "Ingrese la cantidad de pulgadas: ";
                cin >> datos;
                res = datos * 0.0254;
                cout << datos << " pulgadas son " << res << " metros." << endl;
                break;

            case 6:
                cout << "---- Kilos a libras ----" << endl;
                cout << "Ingrese la cantidad de kilos: ";
                cin >> datos;
                res = datos * 2.20462;
                cout << datos << " kilos son " << res << " libras." << endl;
                break;

            default:
                cout << "Opcion seleccionada no existe." << endl;
                break;
        }

        cout << "Desea realizar otra conversion? (s/n): ";
        cin >> r;
        system("cls");

    } while (r == 's' || r == 'S');

    system("pause");
}


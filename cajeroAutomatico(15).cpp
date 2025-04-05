#include <iostream>
#include <string>
using namespace std;

// Estructura para las cuentas
struct Cuenta {
    double saldo;
    string tipo;
};

// Función para mostrar el menú de opciones
void mostrarMenu() {
    cout << "\n*** CAJERO AUTOMATICO ***" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;  // Opción para depositar dinero
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

// Función para autenticar al usuario con un PIN global
bool autenticarUsuario(const string& pinCorrecto) {
    string pinIngresado;
    int intentos = 0;

    cout << "Ingrese su PIN: ";
    while (intentos < 3) {
        cin >> pinIngresado;
        if (pinIngresado == pinCorrecto) {
            return true;  // El PIN es correcto
        } else {
            intentos++;
            cout << "PIN incorrecto. Intento " << intentos << " de 3." << endl;
            if (intentos < 3) {
                cout << "Ingrese su PIN nuevamente: ";
            }
        }
    }

    cout << "Cuenta bloqueada por intentos incorrectos." << endl;
    return false;
}

int main() {
    // Crear cuentas de Ahorros y Monetaria
    Cuenta cuentaAhorros = {1000.0, "Ahorros"};
    Cuenta cuentaMonetaria = {5000.0, "Monetaria"};
    Cuenta* cuentaSeleccionada = nullptr;

    int opcionMenu;
    int opcionCuenta;
    bool usuarioAutenticado = false;
    
    // Definir un PIN global para todo el sistema
    const string PIN_GLOBAL = "1234";  // Aquí defines el PIN único global

    // Simular la inserción de tarjeta
    string tarjeta;
    cout << "Por favor, inserte su tarjeta (presione Enter para continuar):";
    getline(cin, tarjeta);  // Simulamos la inserción de tarjeta

    cout << "\n*** Bienvenido al Cajero Automatico! ***" << endl;

    // Autenticar usuario con el PIN global
    usuarioAutenticado = autenticarUsuario(PIN_GLOBAL);
    if (!usuarioAutenticado) {
        cout << "Acceso denegado." << endl;
        return 1;  // Si no se puede autenticar, termina el programa
    }

    // Bucle principal del cajero automático
    do {
        // Mostrar el menú de operaciones después de la autenticación del PIN
        mostrarMenu();  // Mostrar menú de operaciones
        cin >> opcionMenu;  // Leer la opción seleccionada por el usuario

        switch (opcionMenu) {
            case 1:  // Consultar saldo
                cout << "Seleccione el tipo de cuenta (1. Ahorros, 2. Monetaria): ";
                cin >> opcionCuenta;

                if (opcionCuenta == 1) {
                    cout << "Su saldo en la cuenta de Ahorros es: $" << cuentaAhorros.saldo << endl;
                } else if (opcionCuenta == 2) {
                    cout << "Su saldo en la cuenta Monetaria es: $" << cuentaMonetaria.saldo << endl;
                } else {
                    cout << "Opción no válida. Intente de nuevo." << endl;
                }
                break;

            case 2:  // Retirar dinero
                cout << "Seleccione el tipo de cuenta (1. Ahorros, 2. Monetaria): ";
                cin >> opcionCuenta;

                double cantidad;
                if (opcionCuenta == 1) {
                    cout << "Ingrese la cantidad a retirar de la cuenta Ahorros: $";
                    cin >> cantidad;
                    if (cantidad > cuentaAhorros.saldo) {
                        cout << "No tiene suficiente saldo en Ahorros." << endl;
                    } else if (cantidad <= 0) {
                        cout << "La cantidad debe ser positiva." << endl;
                    } else {
                        cuentaAhorros.saldo -= cantidad;
                        cout << "Ha retirado: $" << cantidad << endl;
                        cout << "Nuevo saldo en Ahorros: $" << cuentaAhorros.saldo << endl;
                    }
                } else if (opcionCuenta == 2) {
                    cout << "Ingrese la cantidad a retirar de la cuenta Monetaria: $";
                    cin >> cantidad;
                    if (cantidad > cuentaMonetaria.saldo) {
                        cout << "No tiene suficiente saldo en Monetaria." << endl;
                    } else if (cantidad <= 0) {
                        cout << "La cantidad debe ser positiva." << endl;
                    } else {
                        cuentaMonetaria.saldo -= cantidad;
                        cout << "Ha retirado: $" << cantidad << endl;
                        cout << "Nuevo saldo en Monetaria: $" << cuentaMonetaria.saldo << endl;
                    }
                } else {
                    cout << "Opción no valida. Intente de nuevo." << endl;
                }
                break;

            case 3:  // Depositar dinero
                cout << "Seleccione el tipo de cuenta (1. Ahorros, 2. Monetaria): ";
                cin >> opcionCuenta;

                if (opcionCuenta == 1) {
                    cout << "Ingrese la cantidad a depositar en la cuenta Ahorros: $";
                    cin >> cantidad;
                    if (cantidad <= 0) {
                        cout << "La cantidad debe ser positiva." << endl;
                    } else {
                        cuentaAhorros.saldo += cantidad;
                        cout << "Ha depositado: $" << cantidad << endl;
                        cout << "Nuevo saldo en Ahorros: $" << cuentaAhorros.saldo << endl;
                    }
                } else if (opcionCuenta == 2) {
                    cout << "Ingrese la cantidad a depositar en la cuenta Monetaria: $";
                    cin >> cantidad;
                    if (cantidad <= 0) {
                        cout << "La cantidad debe ser positiva." << endl;
                    } else {
                        cuentaMonetaria.saldo += cantidad;
                        cout << "Ha depositado: $" << cantidad << endl;
                        cout << "Nuevo saldo en Monetaria: $" << cuentaMonetaria.saldo << endl;
                    }
                } else {
                    cout << "Opcion no valida. Intente de nuevo." << endl;
                }
                break;

            case 4:  // Salir
                cout << "Gracias por usar el cajero. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcionMenu != 4);  // Repetir hasta que el usuario seleccione "Salir"

    return 0;
}


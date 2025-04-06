// Programa para calcular promedio de la cantidad de cursos k indike el usuario

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string nombre;
    int cantidadCursos;
    float sumaNotas = 0, nota, promedio;
    
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    
    cout << "Ingrese la cantidad de cursos: ";
    cin >> cantidadCursos;
    
    for (int i = 1; i <= cantidadCursos; i++) {
        cout << "Ingrese la nota del curso " << i << ": ";
        cin >> nota;
        sumaNotas += nota;
    }
    
    promedio = sumaNotas / cantidadCursos;
    
    cout << "\n";
    if (promedio >= 61) {
        cout << "FELICIDADES, " << nombre << "!\n";
        cout << "Aprobaste con un promedio de: " << promedio << endl;
    } else {
        cout << "Lo siento, " << nombre << "\n";
        cout << "Reprobaste con un promedio de: " << promedio << endl;
    }
    
    return 0;
}
	*/
	
	//Modificando para menu:
#include <iostream>
#include <vector>
using namespace std;

// Definición de la función para calcular el promedio
void calcularPromedio() {
    string nombre;
    int cantidadCursos;
    float sumaNotas = 0, nota, promedio;
    
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    
    cout << "Ingrese la cantidad de cursos: ";
    cin >> cantidadCursos;
    
    for (int i = 1; i <= cantidadCursos; i++) {
        cout << "Ingrese la nota del curso " << i << ": ";
        cin >> nota;
        sumaNotas += nota;
    }
    
    promedio = sumaNotas / cantidadCursos;
    
    cout << "\n";
    if (promedio >= 61) {
        cout << "FELICIDADES, " << nombre << "!\n";
        cout << "Aprobaste con un promedio de: " << promedio << endl;
    } else {
        cout << "Lo siento, " << nombre << "\n";
        cout << "Reprobaste con un promedio de: " << promedio << endl;
    }
}


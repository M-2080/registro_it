#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int opcion;

    cout << "=== MENU DE FIGURAS GEOMETRICAS ===" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Ingrese una opcion (1-3): ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double radio, area;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            
            // Formula: Pi * radio^2
            area = 3.141592653589793 * radio * radio; 
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        case 2: {
            double lado, area;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            
            // Formula: lado * lado
            area = lado * lado;
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        case 3: {
            double base, altura, area;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            
            // Formula: (base * altura) / 2
            area = (base * altura) / 2.0;
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        default:
            cout << "Opcion invalida. Debe seleccionar entre 1 y 3." << endl;
    }

    return 0;
}
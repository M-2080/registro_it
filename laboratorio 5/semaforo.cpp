#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    char color;

    cout << "Ingrese la letra del color del semaforo (R, A, V): ";
    cin >> color;

    
    switch (toupper(color)) {
        case 'R':
            cout << "Alto" << endl;
            break;
        case 'A':
            cout << "Precaucion" << endl;
            break;
        case 'V':
            cout << "Avance" << endl;
            break;
        default:
            cout << "color no reconocido" << endl;
    }

    return 0;
}
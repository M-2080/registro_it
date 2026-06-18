
#include <iostream>
using namespace std;

int main() {

    double celsius, fahrenheit;

    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;

    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    
    cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}
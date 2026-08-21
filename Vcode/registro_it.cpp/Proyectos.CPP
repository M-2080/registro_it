#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // 1. crear y escribir un archivo de texto (simulacion del log IT)
    ofstream archivoSalida("registro_servidor.txt");

    if (archivoSalida.is_open()){
        archivoSalida << "LOG_01: Servidor iniciado correctamente.\n";
        archivoSalida << "LOG_02: conexion a base de datos establecida.\n";
        archivoSalida << "LOG_03: Advertencia - uso de CPU al 78%.\n";
        cout << "[OK] Archivo de log creado con exito.\n";
    } else {
        cout << "[ERROR] No se puede crear el archivo.\n";
        return 1;
    }

    // 2. Leer el archivo generado linea por linea 
    ifstream archivoEntrada("registro_servidor.txt");
    string linea;

    cout <<"/n--- LEYENDO REGISTRO DEL SERVIDOR ---\n";
    if(archivoEntrada.is_open()){
        while (getline(archivoEntrada, linea)){
             cout << ">>" << linea << endl;
        }
        archivoEntrada.close();
    } else {
        cout << "[ERROR] No se pudo abrir el archivo para lectura./n";
    }
     return 0;
}
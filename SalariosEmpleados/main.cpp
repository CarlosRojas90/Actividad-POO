#include <iostream>
#include "Nomina.h"

using std::cout;
using std::cin;

int main() {
    Nomina nomina;
    int opcion = 0;

    while (opcion != 3){
        cout << "1. Mostrar empleados\n";
        cout << "2. Calcular nomina total\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opcion\n";

        cin >> opcion;

        switch(opcion){

        case 1:
            nomina.imprimirNomina();
            break;
        case 2:
            cout << "La nomina total a pagar es: "<< nomina.calcularNomina()<< "\n";
            break;
        case 3:
            break;
        default:
            cout << "Selecciona una opcion valida\n";
            break;
        }
    }
    return 0;
}

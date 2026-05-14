#include <iostream>
#include "Nomina.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

using std::string;

Nomina::Nomina(){ // Implemento Nomina para que inicialice los datos a la hora de construirlo en em main
    inicializarDatos();
}

void Nomina::inicializarDatos() { // Instancio lo empleados y les asigno sus parametros

    Empleado* e1 = new DesarrolladorJunior("Carlos Rojas", 20000);
    Empleado* e2 = new DesarrolladorJunior("Juan Jose", 22000);
    Empleado* e3 = new DesarrolladorSenior("Martin Henao", 40000);
    Empleado* e4 = new DesarrolladorSenior("Juan Manuel", 45000);
    Empleado* e5 = new LiderTecnico("Joseph Andres", 56000);
    Empleado* e6 = new LiderTecnico("Camilo Camacho", 67000);
    Empleado* e7 = new LiderTecnico("Luis Fernando", 80000);
    Empleado* e8 = new LiderTecnico("Juan Daniel", 90000);

    empleados.push_back(e1); // Luego agrego cada empleado al vector empleados
    empleados.push_back(e2);
    empleados.push_back(e3);
    empleados.push_back(e4);
    empleados.push_back(e5);
    empleados.push_back(e6);
    empleados.push_back(e7);
    empleados.push_back(e8);
}

void Nomina::imprimirNomina() const { // Imprimo la nomina
    std::cout << "\n-----------------\n";
    std::cout << "NOMINA DE EMPLEADOS\n";
    std::cout << "-------------------\n";

    for (Empleado* e : empleados) { // Recorre cada apuntador en el vector empleados para imprimir sus valores
        std::cout << "Nombre: " << e->getNombre()      << "\n";
        std::cout << "Tipo: " << e->getTipo()         << "\n";
        std::cout << "Base: " << e->getSalarioInicial() << "\n";
        std::cout << "Total: " << e->calcularSalario()<< "\n";
        std::cout << "----------------------------------------\n";
    }
}

double Nomina::calcularNomina() const {
    double total = 0;
    for (Empleado* e : empleados) { // Recorre cada apuntador en el vector empleados para sumar su salario y obtener el total de la nomina
        total += e->calcularSalario();
    }
    return total;
}

Nomina::~Nomina() { //Destructor
    for (Empleado* e : empleados) { // Recorre cada apuntador en el vector empleados para eliminarlos
        delete e;
    }
}

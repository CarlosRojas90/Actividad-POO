#include "Tester.h"
using std::string;

Tester::Tester(string nombre, double salarioInicial) // Defino el constructor con parametros que llegan al metodo, donde despues manda esos parametros al constructor de Empleados
    : Empleado(nombre, salarioInicial) {}

double Tester::calcularSalario() const {
    return salarioInicial * 1.05; // Devuelve el salarioInicial con bono de 5%
}

std::string Tester::getTipo() const {
    return "Tester"; // Devuelve el tipo de empleado
}

#include "DesarrolladorJunior.h"
using std::string;

DesarrolladorJunior::DesarrolladorJunior(string nombre, double salarioInicial) // Defino el constructor con parametros que llegan al metodo, donde despues manda esos parametros al constructor de Empleados
    : Empleado(nombre, salarioInicial) {}

double DesarrolladorJunior::calcularSalario() const {
    return salarioInicial; // Devuelve el salarioInicial sin bono
}

string DesarrolladorJunior::getTipo() const {
    return "Desarrollador Junior"; // Devuelve el tipo de empleado
}

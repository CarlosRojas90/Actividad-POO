#include "DesarrolladorSenior.h"
using std::string;

DesarrolladorSenior::DesarrolladorSenior(string nombre, double salarioInicial) // Defino el constructor con parametros que llegan al metodo, donde despues manda esos parametros al constructor de Empleados
    : Empleado(nombre, salarioInicial) {}

double DesarrolladorSenior::calcularSalario() const {
    return salarioInicial * 1.20; // Devuelve el salarioInicial con bono de 20%
}

std::string DesarrolladorSenior::getTipo() const {
    return "Desarrollador Senior"; // Devuelve el tipo de empleado
}

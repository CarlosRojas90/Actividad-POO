#include "LiderTecnico.h"
using std::string;

LiderTecnico::LiderTecnico(string nombre, double salarioInicial) // Defino el constructor con parametros que llegan al metodo, donde despues manda esos parametros al constructor de Empleados
    : Empleado(nombre, salarioInicial) {}

double LiderTecnico::calcularSalario() const {
    return salarioInicial * 1.25; // Devuelve el salarioInicial con bono de 25%
}

std::string LiderTecnico::getTipo() const {
    return "Lider Tecnico"; // Devuelve el tipo de empleado
}

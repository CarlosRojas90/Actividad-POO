#include "Empleado.h"
using std::string;

Empleado::Empleado(string nombre, double salarioInicial) // Constructor de Empleado con parametros. LLegan los parametros de las clases hijas
    : nombre(nombre), salarioInicial(salarioInicial) {}

string Empleado::getNombre() const{
    return nombre;
}

double Empleado::getSalarioInicial() const{
    return salarioInicial;
}

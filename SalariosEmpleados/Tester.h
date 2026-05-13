#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"
using std::string;

class Tester : public Empleado { //Creo la clase que es clase hija de Empleado
public:
    Tester(string nombre, double salarioInicial); // Declaro el constructor con parametros

    double calcularSalario() const override; // Se usa el metodo de la clase padre y se sobrescribe
    string getTipo() const override; // Se usa el metodo de la clase padre y se sobrescribe
};

#endif

#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include "Empleado.h"
using std::string;

class LiderTecnico : public Empleado { //Creo la clase que es clase hija de Empleado
public:
    LiderTecnico(string nombre, double salarioInicial); // Declaro el constructor con parametros

    double calcularSalario() const override; // Se usa el metodo de la clase padre y se sobrescribe
    std::string getTipo() const override; // Se usa el metodo de la clase padre y se sobrescribe
};

#endif

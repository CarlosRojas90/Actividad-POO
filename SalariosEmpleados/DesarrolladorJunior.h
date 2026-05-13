#ifndef DESARROLLADORJUNIOR_H_INCLUDED
#define DESARROLLADORJUNIOR_H_INCLUDED

#include "Empleado.h"
using std::string;

class DesarrolladorJunior : public Empleado { // Declaro la clase, que es clase hija de Empleado
public:
    DesarrolladorJunior(string nombre, double salarioInicial); // Declaro el constructor con parametros
    double calcularSalario() const override;// Se usa el metodo de la clase padre y se sobrescribe
    string getTipo() const override;// Se usa el metodo de la clase padre y se sobrescribe
};

#endif // DESARROLLADORJUNIOR_H_INCLUDED

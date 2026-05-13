#ifndef GESTION_NOMINA_H
#define GESTION_NOMINA_H

#include <vector>
#include "Empleado.h"

class Nomina {
private:
    std::vector<Empleado*> empleados; // Creo un vector que reciba y guarde apuntadores Empleado que se llame empleados. Cada clasa hija es un Empleado, entonces se pueden guardan como apuntador de Empleado
    void inicializarDatos(); // Crea los empleados en la memoria dinamica y guarda los apuntadores en el vector empleados

public:
    Nomina();
    void imprimirNomina() const; // Funcion para imprimir la nomina de cada empleado
    double calcularNomina() const; // Funcion para calcular la nomina total

    ~Nomina(); // Declaro destructor
};

#endif

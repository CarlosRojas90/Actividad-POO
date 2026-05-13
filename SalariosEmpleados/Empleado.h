#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include <string>
using std::string;

class Empleado {
protected: // Para que la propia clase pueda acceder y tambien las clases hijas
    string nombre;
    double salarioInicial;

public:
    Empleado(string nombre, double salarioInicial); // Creo el constructor con parametros
    string getNombre() const; // Funcion para obtener el nombre y funciona igual en todos las clases hijas
    double getSalarioInicial() const; // Funcion para obtener salario y funciona igual en todas las clases hijas
    virtual double calcularSalario() const = 0; // Metodo virtual puro en la cual cada clase hija lo tiene que implementar a su manera
    virtual string getTipo() const = 0; // Metodo virtual puro que devuelve el puesto del empleado
    virtual ~Empleado() = default;// Declaro destructor virtual para que el compilador no me de error
};

#endif // EMPLEADO_H_INCLUDED

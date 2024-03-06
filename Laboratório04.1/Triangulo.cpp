#include "Triangulo.hpp"

int Triangulo::instancias = 0;


Triangulo::Triangulo() : lado1(1), lado2(1), lado3(1) {
    instancias++;
}

Triangulo::Triangulo(double a, double b, double c) : lado1(a), lado2(b), lado3(c) {
    instancias++;
}

Triangulo::~Triangulo() {
    instancias--;
}

int Triangulo::getInstancias() {
    return instancias;
}

Triangulo::TipoTriangulo Triangulo::getTipo() const {
    if (lado1 == lado2 && lado2 == lado3) {
        return EQUILATERO;
    } else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        return ESCALENO;
    } else {
        return ISOSCELES;
    }
}

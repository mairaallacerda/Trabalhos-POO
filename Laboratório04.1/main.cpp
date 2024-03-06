#include <iostream>
#include "Triangulo.hpp"

int main() {
    double a, b, c;
    std::cout << "Digite os lados do triângulo (a, b, c): ";
    std::cin >> a >> b >> c;

    Triangulo tri(a, b, c);

    if (a + b > c && a + c > b && b + c > a) { //problema
        std::cout << "Triângulo criado com sucesso!" << std::endl;
        std::cout << "Tipo de triângulo: ";
        switch (tri.getTipo()) {
            case Triangulo::ESCALENO:
                std::cout << "Escaleno";
                break;
            case Triangulo::ISOSCELES:
                std::cout << "Isósceles";
                break;
            case Triangulo::EQUILATERO:
                std::cout << "Equilátero";
                break;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Os lados fornecidos não formam um triângulo válido." << std::endl;
    }

    std::cout << "Número de instâncias de Triangulo: " << Triangulo::getInstancias() << std::endl;

    return 0;
}

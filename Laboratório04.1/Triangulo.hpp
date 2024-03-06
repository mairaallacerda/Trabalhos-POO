#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo {
private:
    double lado1;
    double lado2;
    double lado3;
    static int instancias;

public:
    Triangulo();  // Construtor padrão
    Triangulo(double a, double b, double c);  // Construtor com parâmetros
    ~Triangulo();  // Destrutor
    static int getInstancias();  // Método estático para obter o número de instâncias

    enum TipoTriangulo {
        ESCALENO,
        ISOSCELES,
        EQUILATERO
    };

    TipoTriangulo getTipo() const;
};

#endif

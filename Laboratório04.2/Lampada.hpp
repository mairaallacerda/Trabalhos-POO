#ifndef LAMPADA_HPP
#define LAMPADA_HPP

#include <string>

using namespace std;

class Lampada {
private:
    string modelo;
    int tensao;
    bool estado; // true para ligada, false para desligada
    static int instancias; 

public:
    // Construtor
    Lampada(string modelo, int tensao, bool estado);


    string getModelo() const;
    void setModelo(const string & modelo);

    int getTensao() const;
    void setTensao(int tensao);

    bool getEstado() const;
    void setEstado(bool estado);

    
    void acender();
    void apagar();
    void mostrarEstado();
    void imprimir();
    
    static int getInstancias();
};

#endif 

#ifndef __TAXI_HPP
#define __TAXI_HPP

#include <string>

using namespace std;

class Taxi { 
private: 
    string modelo;
    float motorizacao;
    string fabricante;
    string nome;
    float q_Inicial;
    float q_Final;

public:
    Taxi();
    ~Taxi();

    void setNome(string nome);
    string getNome();
    void setModelo(string modelo);
    string getModelo();
    void setMotorizacao(float motorizacao);
    float getMotorizacao();
    void setFabricante(string fabricante);
    string getFabricante();
    void setQ_Inicial(float q_Inicial);
    float getQ_Inicial();
    void setQ_Final(float q_Final);
    float getQ_Final();


    void imprimir();
    float calcularQuilometragemPercorrida();
    float valorFinal();

};

#endif

#include <iostream>
#include "Taxi.hpp"


Taxi::Taxi() {}
Taxi::~Taxi() {}

void Taxi::setNome(string n) {
    nome = n;
}
string Taxi::getNome() {
    return nome;
}
void Taxi::setModelo(string m) {
    modelo = m;
}
string Taxi::getModelo() {
    return modelo;
}
void Taxi::setMotorizacao(float mo) {
    motorizacao = mo;
}
float Taxi::getMotorizacao() {
    return motorizacao;
}
void Taxi::setFabricante(string f) {
    fabricante = f;
}
string Taxi::getFabricante() {
    return fabricante;
}
void Taxi::setQ_Inicial(float qi) {
    q_Inicial = qi;
}
float Taxi::getQ_Inicial() {
    return q_Inicial;
}
void Taxi::setQ_Final(float qf) {
    q_Final = qf;
}
float Taxi::getQ_Final() {
    return q_Final;
}



void Taxi::imprimir() {
    cout << "\nNome: " << nome << "\nModelo: " << modelo << "\nMotorização: " << motorizacao << "\nFabricante: " << fabricante << "\nQuilometragem Inicial: " << q_Inicial << "\nQuilometragem Final: " << q_Final << endl;
}

float Taxi::calcularQuilometragemPercorrida() {
    return q_Final - q_Inicial;
}

float Taxi::valorFinal() {
    return (q_Final - q_Inicial) * 3.75;
}


#include "Lampada.hpp"
#include <iostream>

using namespace std;

int Lampada::instancias = 0;


Lampada::Lampada(string modelo, int tensao, bool estado) : modelo(modelo), tensao(tensao), estado(estado) {
    instancias++; 
}


string Lampada::getModelo() const {
    return modelo;
}

void Lampada::setModelo(const std::string &modelo) {
    this->modelo = modelo;
}

int Lampada::getTensao() const {
    return tensao;
}

void Lampada::setTensao(int tensao) {
    this->tensao = tensao;
}

bool Lampada::getEstado() const {
    return estado;
}

void Lampada::setEstado(bool estado) {
    this->estado = estado;
}


void Lampada::acender() {
    estado = true;
}

void Lampada::apagar() {
    estado = false;
}

void Lampada::mostrarEstado() {
    if (estado) {
        cout << "A lâmpada está ligada." << endl;
    } else {
        cout << "A lâmpada está desligada." << endl;
    }
}
void Lampada::imprimir() {
    cout << "\nModelo: " << modelo << "\nTensão " << tensao << "V" << "\nEstado: " << estado << endl;
}

int Lampada::getInstancias() {
    return instancias;
}


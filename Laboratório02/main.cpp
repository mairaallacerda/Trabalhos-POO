#include "Taxi.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Taxi p;

  string modelo, fabricante, nome;
  float motorizacao, q_Inicial, q_Final;

  cout << "Digite o nome: ";
  getline(cin, nome);
  p.setNome(nome);

  cout << "Digite o modelo do carro: ";
  getline(cin, modelo);
  p.setModelo(modelo);

  cout << "Digite o fabricante do carro: ";
  getline(cin, fabricante);
  p.setFabricante(fabricante);

  cout << "Digite a motorização do carro: ";
  cin >> motorizacao;
  p.setMotorizacao(motorizacao);

  cout << "Digite a quilometragem inicial do carro: ";
  cin >> q_Inicial;
  p.setQ_Inicial(q_Inicial);

  cout << "Digite a quilometragem final do carro: ";
  cin >> q_Final;
  p.setQ_Final(q_Final);


  cout << "\nQuilometragem Percorrida: " << p.calcularQuilometragemPercorrida()
       << endl;
  cout << "\nValor final da corrida: " << p.valorFinal() << endl;
  cout << "\n ----------IMPRIMINDO----------" << endl;
  p.imprimir();
  return 0;
}

#include "Lampada.hpp"
#include <iostream>

using namespace std;

int main() {


    int numLampadas;
    cout << "Quantas lâmpadas deseja criar? ";
    cin >> numLampadas;

    for (int i = 0; i < numLampadas; i++){

        string modelo;
        int tensao;
        bool estado;

        cout << "Digite o modelo da lâmpada " << i + 1 << ": ";
       cin >> modelo;
        cout << "Digite a tensão da lâmpada " << i + 1 << ": ";
        cin >> tensao;
     
        cout << "Digite o estado da lâmpada " << i + 1 << " (0 para desligada, 1 para ligada): ";
        cin >> estado;
    

         Lampada lampada(modelo, tensao, estado);
         
        cout << "\n ----------IMPRIMINDO----------" << endl;
        lampada.imprimir();
        cout << endl;
        cout << "Estado inicial da lâmpada " << i + 1 << ": ";
        lampada.mostrarEstado();
        cout << endl;
        
    }
       
  
    cout << "Número total de instâncias da classe Lampada: " << Lampada::getInstancias() << endl;

    return 0;
    }


//     Lampada lamp1("Lâmpada 1", 220, false);
//     Lampada lamp2("Lâmpada 2", 110, true);

//     lamp1.acender();
//     lamp2.apagar();

//     cout << "Estado da Lâmpada 1: ";
//     lamp1.mostrarEstado();
  
//     cout << "Estado da Lâmpada 2: ";
//     lamp2.mostrarEstado();

//     cout << "--------FAZENDO O CONTRÁRIO --------" << endl;
  
//     cout << "Desligando Lâmpada 1" << endl;
//     lamp1.apagar();
//     lamp1.mostrarEstado();

//     cout << "Estado da Lâmpada 2: ";
//     lamp2.mostrarEstado();
  
//     cout << "Ligando Lâmpada 2" << endl;
//     lamp2.acender();
//     lamp2.mostrarEstado();
  

//     cout << "Número de instâncias da classe Lampada: " << Lampada::getInstancias() << endl;

//     return 0;
// }

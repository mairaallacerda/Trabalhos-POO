#include <iostream>
#include "FilaDeImpressao.hpp"

int main() {
    FilaDeImpressao fila;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Adicionar documento\n";
        std::cout << "2. Consultar documento\n";
        std::cout << "3. Listar documentos\n";
        std::cout << "4. Remover documento\n";
        std::cout << "5. Alterar documento\n";
        std::cout << "6. Sair\n";
        std::cout << "Escolha uma opção: ";

        int opcao;
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                int id, numPaginas, prioridade;
                std::string nomeArquivo;
                std::cout << "ID: ";
                std::cin >> id;
                std::cin.ignore();
                std::cout << "Nome do Arquivo: ";
                std::getline(std::cin, nomeArquivo);
                std::cout << "Número de Páginas: ";
                std::cin >> numPaginas;
                std::cout << "Prioridade: ";
                std::cin >> prioridade;
                Documento documento(id, nomeArquivo, numPaginas, prioridade);
                fila.adicionarDocumento(documento);
                break;
            }
            case 2: {
                int id;
                std::cout << "Informe o ID do documento: ";
                std::cin >> id;
                Documento* doc = fila.consultarDocumento(id);
                if (doc != nullptr) {
                    doc->imprimir();
                } else {
                    std::cout << "Documento com ID " << id << " não encontrado na fila.\n";
                }
                break;
            }
            case 3:
                std::cout << "\nDocumentos na fila:\n";
                fila.listarDocumentos();
                break;
            case 4: {
                int id;
                std::cout << "Informe o ID do documento a ser removido: ";
                std::cin >> id;
                fila.removerDocumento(id);
                break;
            }
            case 5: {
                int id;
                std::cout << "Informe o ID do documento a ser alterado: ";
                std::cin >> id;
                fila.alterarDocumento(id);
                break;
            }
            case 6:
                std::cout << "Saindo do programa.\n";
                return 0;
            default:
                std::cout << "Opção inválida.\n";
        }
    }

    return 0;
}

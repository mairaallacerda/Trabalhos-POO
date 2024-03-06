#ifndef FILADEIMPRESSAO_HPP
#define FILADEIMPRESSAO_HPP

#include <iostream>
#include <string>

class Documento {
public:
    Documento(int id, const std::string& nomeArquivo, int numPaginas, int prioridade);

    int getId() const;
    void setId(int id);
    std::string getNomeArquivo() const;
    int getNumPaginas() const;
    int getPrioridade() const;
    void imprimir() const;

private:
    int id;
    std::string nomeArquivo;
    int numPaginas;
    int prioridade;
};

class FilaDeImpressao {
public:
    FilaDeImpressao();
    ~FilaDeImpressao();

    void adicionarDocumento(const Documento& documento);
    Documento* consultarDocumento(int id);
    void listarDocumentos() const;
    void removerDocumento(int id);
    void alterarDocumento(int id);

private:
    struct Node {
        Documento documento;
        Node* next;
        Node(const Documento& doc) : documento(doc), next(nullptr) {}
    };

    Node* head;

    Node* getNode(int id);
};

#endif // FILADEIMPRESSAO_HPP

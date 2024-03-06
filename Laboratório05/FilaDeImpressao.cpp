#include "FilaDeImpressao.hpp"

Documento::Documento(int id, const std::string& nomeArquivo, int numPaginas, int prioridade)
    : id(id), nomeArquivo(nomeArquivo), numPaginas(numPaginas), prioridade(prioridade) {}

int Documento::getId() const {
    return id;
}

void Documento::setId(int id) {
    this->id = id;
}

std::string Documento::getNomeArquivo() const {
    return nomeArquivo;
}

int Documento::getNumPaginas() const {
    return numPaginas;
}

int Documento::getPrioridade() const {
    return prioridade;
}

void Documento::imprimir() const {
    std::cout << "ID: " << id << " Nome do Arquivo: " << nomeArquivo
              << " Páginas: " << numPaginas << " Prioridade: " << prioridade << std::endl;
}

FilaDeImpressao::FilaDeImpressao() : head(nullptr) {}

FilaDeImpressao::~FilaDeImpressao() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void FilaDeImpressao::adicionarDocumento(const Documento& documento) {
    Node* newNode = new Node(documento);
    if (head == nullptr || documento.getPrioridade() > head->documento.getPrioridade()) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && documento.getPrioridade() <= current->next->documento.getPrioridade()) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

Documento* FilaDeImpressao::consultarDocumento(int id) {
    Node* node = getNode(id);
    if (node != nullptr) {
        return &node->documento;
    }
    return nullptr;
}

void FilaDeImpressao::listarDocumentos() const {
    Node* current = head;
    while (current != nullptr) {
        current->documento.imprimir();
        current = current->next;
    }
}

void FilaDeImpressao::removerDocumento(int id) {
    Node* current = head;
    if (current != nullptr && current->documento.getId() == id) {
        head = current->next;
        delete current;
        return;
    }

    while (current != nullptr && current->next != nullptr) {
        if (current->next->documento.getId() == id) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            return;
        }
        current = current->next;
    }
}

void FilaDeImpressao::alterarDocumento(int id) {
    Node* node = getNode(id);
    if (node != nullptr) {
        Documento& documento = node->documento;
        int opcao;
        std::cout << "O que deseja alterar?\n";
        std::cout << "1. Nome do Arquivo\n";
        std::cout << "2. Número de Páginas\n";
        std::cout << "3. Prioridade\n";
        std::cout << "Opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                std::string novoNome;
                std::cout << "Novo Nome do Arquivo: ";
                std::cin.ignore();
                std::getline(std::cin, novoNome);
                documento.setNomeArquivo(novoNome);
                break;
            }
            case 2: {
                int novasPaginas;
                std::cout << "Novo Número de Páginas: ";
                std::cin >> novasPaginas;
                documento.setNumPaginas(novasPaginas);
                break;
            }
            case 3: {
                int novaPrioridade;
                std::cout << "Nova Prioridade: ";
                std::cin >> novaPrioridade;
                documento.setPrioridade(novaPrioridade);
                break;
            }
            default:
                std::cout << "Opção inválida.\n";
        }
    } else {
        std::cout << "Documento com ID " << id << " não encontrado na fila.\n";
    }
}

FilaDeImpressao::Node* FilaDeImpressao::getNode(int id) {
    Node* current = head;
    while (current != nullptr) {
        if (current->documento.getId() == id) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

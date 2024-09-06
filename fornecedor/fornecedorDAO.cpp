#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "fornecedorDAO.hpp" 

FornecedorDAO& FornecedorDAO::getInstance() {
    static FornecedorDAO instance;  // Cria a instância uma única vez
    return instance;  // Retorna a referência à instância
}   

void FornecedorDAO::cadastrarFornecedor(const Fornecedor& fornecedor) {
    
    fornecedores.push_back(fornecedor);
}

Fornecedor FornecedorDAO::buscarFornecedor(const int& id) {
    for (const auto& fornecedor : fornecedores) {
        if (fornecedor.getId() == id) {
            return fornecedor;
        }
    }
    cout << "Fornecedor não encontrado!\n";
    return Fornecedor();
}

void FornecedorDAO::atualizarFornecedor(const Fornecedor& fornecedor) {
    for(auto it = fornecedores.begin(); it != fornecedores.end(); ++it){
        if(it->getId() == fornecedor.getId()){
            *it = fornecedor;
            break;
        }
    }
}

void FornecedorDAO::deletarFornecedor(int id) {
    for (size_t i = 0; i < fornecedores.size(); i++) {
        if (fornecedores[i].getId() == id) {
            fornecedores.erase(fornecedores.begin() + i);
            cout << "Fornecedor com id " << id << " foi deletado com sucesso.\n";
            return;
        }
    }
    cout << "Fornecedor com CNPJ " << id << " não encontrado!\n";
}

vector<Fornecedor> FornecedorDAO::listarFornecedores() {
    for(const auto& fornecedor : fornecedores){
        cout << "ID: " << fornecedor.getId() << endl;
        cout << "Nome: " << fornecedor.getNome() << endl;
        cout << "CNPJ: " << fornecedor.getCnpj() << endl;
        cout << "Telefone: " << fornecedor.getTelefone() << endl;   
        cout << "----------------------------------------\n";   
    }   
    return fornecedores;
}

void FornecedorDAO::listarFornecedoresDetalhados() {
    for (const auto& fornecedor : fornecedores) {
        cout << "ID: " << fornecedor.getId() << endl;
        cout << "Nome: " << fornecedor.getNome() << endl;
        cout << "CNPJ: " << fornecedor.getCnpj() << endl;
        cout << "Email: " << fornecedor.getEmail() << endl;
        cout << "Telefone: " << fornecedor.getTelefone() << endl;
        cout << "Endereco: " << fornecedor.getEndereco() << endl;
        cout << "Cidade: " << fornecedor.getCidade() << endl;
        cout << "Estado: " << fornecedor.getEstado() << endl;
        cout << "CEP: " << fornecedor.getCep() << endl;
        cout << "----------------------------------------\n";
    }
}   





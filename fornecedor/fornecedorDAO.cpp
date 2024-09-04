#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "fornecedorDAO.hpp"

FornecedorDAO::FornecedorDAO(){
    Fornecedor f1(1,"Manel", "1234567890", "Manel@gmail.com", "44 9999", "Rua 1", "Sao Paulo", "SP", "12345678");
    fornecedores.push_back(f1);
    Fornecedor f2(2,"João", "1234567890", "rosana@gmail.com", "44 9999", "Rua 2", "Sao Paulo", "SP", "12345678");
    fornecedores.push_back(f2);
    Fornecedor f3(3,"Eric", "1234567890", "sabrina@gmail.com", "44 9999", "Rua 3", "Sao Paulo", "SP", "12345678");
    fornecedores.push_back(f3);
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





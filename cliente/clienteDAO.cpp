#include "clienteDAO.hpp"
#include <iostream>

ClienteDAO& ClienteDAO::getInstance() {
    static ClienteDAO instance;  // Singleton
    return instance;
}

void ClienteDAO::cadastrarCliente(const Cliente& cliente) {
    clientes.push_back(cliente);
}

Cliente ClienteDAO::buscarCliente(const int& id) {
    for(const auto& cliente : clientes) {
        if(cliente.getId() == id) {
            return cliente;
        }
    }
    return Cliente();  // Retorna um cliente vazio se não for encontrado
}

void ClienteDAO::atualizarCliente(const Cliente& cliente) {
    for(auto& c : clientes) {
        if(c.getId() == cliente.getId()) {
            c = cliente;
            break;
        }
    }
}

void ClienteDAO::deletarCliente(const int& id) {
    for(auto it = clientes.begin(); it != clientes.end(); ++it) {
        if(it->getId() == id) {
            clientes.erase(it);
            break;
        }
    }
}

vector<Cliente> ClienteDAO::listarClientes() {
    for(const auto& cliente : clientes) {
        std::cout << "\nNome: " << cliente.getNome();
        std::cout << "\nEmail: " << cliente.getEmail();
        std::cout << "\nTelefone: " << cliente.getTelefone();
    }
    std::cout << "\nClientes listados com sucesso!\n";
    return clientes;
}

void ClienteDAO::listarClientesDetalhados() {  // Correção do nome
    for(const auto& cliente : clientes) {
        std::cout << "\n----------------------------------------\n";
        std::cout << "\nNome: " << cliente.getNome();
        std::cout << "\nEmail: " << cliente.getEmail();
        std::cout << "\nTelefone: " << cliente.getTelefone();
        std::cout << "\nEndereco: " << cliente.getEndereco();
        std::cout << "\nCidade: " << cliente.getCidade();
        std::cout << "\nEstado: " << cliente.getEstado();
        std::cout << "\nCEP: " << cliente.getCep();
    }
    std::cout << "\nClientes listados com sucesso!\n";
}

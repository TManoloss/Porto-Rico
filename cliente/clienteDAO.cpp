#include "clienteDAO.hpp"

ClienteDAO::ClienteDAO(){
    Cliente cli1(1,"Manel", "1234567890", "Manel@gmail.com", "44 9999", "Rua 1", "Sao Paulo", "SP", "12345678");
    clientes.push_back(cli1);
    Cliente cli2(2,"Rosana", "1234567890", "rosana@gmail.com", "44 9999", "Rua 2", "Sao Paulo", "SP", "12345678");
    clientes.push_back(cli2);
    Cliente cli3(3,"Sabrina", "1234567890", "sabrina@gmail.com", "44 9999", "Rua 3", "Sao Paulo", "SP", "12345678");
    clientes.push_back(cli3);
    
}

void ClienteDAO::cadastrarCliente(const Cliente& cliente){
    clientes.push_back(cliente);
}

Cliente ClienteDAO::buscarCliente(const int& id){
    for(const auto& cliente : clientes){
        if(cliente.getId() == id){
            return cliente;
        }
    }
    return Cliente();
}

void ClienteDAO::atualizarCliente(const Cliente& cliente){
    for(auto& c : clientes){
        if(c.getId() == cliente.getId()){
            c = cliente;
            break;
        }
    }
}

void ClienteDAO::deletarCliente(const int& id){
    for(auto it = clientes.begin(); it != clientes.end(); ++it){
        if(it->getId() == id){
            clientes.erase(it);
            break;
        }
    }
}

vector<Cliente> ClienteDAO::listarClientes(){
    for (const auto& cliente : clientes) {
        std::cout << "\nNome: " << cliente.getNome();
        std::cout << "\nEmail: " << cliente.getEmail();
        std::cout << "\nTelefone: " << cliente.getTelefone();
    }
    cout << "\nClientes listados com sucesso!\n";
    return this->clientes; 
}

void ClienteDAO::listarCLientesDetalhados(){
    for(const auto& cliente : clientes){
        std::cout << "\nNome: " << cliente.getNome();
        std::cout << "\nEmail: " << cliente.getEmail();
        std::cout << "\nTelefone: " << cliente.getTelefone();
        std::cout << "\nEndereco: " << cliente.getEndereco();
        std::cout << "\nCidade: " << cliente.getCidade();
        std::cout << "\nEstado: " << cliente.getEstado();
        std::cout << "\nCEP: " << cliente.getCep();
    }
    cout << "\nCliente listado com sucesso!\n";
}

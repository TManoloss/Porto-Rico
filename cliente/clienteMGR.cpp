#include "clienteMGR.hpp"

ClienteMGR::ClienteMGR(): id(0){}

void ClienteMGR::cadastrarCliente(const Cliente& cliente){
    clienteDAO.cadastrarCliente(cliente);
}

Cliente ClienteMGR::buscarCliente(const int& id){
    return clienteDAO.buscarCliente(id);
}

void ClienteMGR::atualizarCliente(const Cliente& cliente){
    clienteDAO.atualizarCliente(cliente);
}

void ClienteMGR::deletarCliente(const int& id){
    clienteDAO.deletarCliente(id);
}

vector<Cliente> ClienteMGR::listarClientes(){
    return clienteDAO.listarClientes();
}
 void ClienteMGR::listarCLientesDetalhados(){
    clienteDAO.listarCLientesDetalhados();
 }
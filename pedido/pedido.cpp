#include "pedido.hpp"
#include <iostream>
using std::cout;
using std::endl;

Pedido::Pedido() 
    : Orcamento(), numPedido(0), cliente(""), materiais(""), status(""), enderecoServico("") {}

Pedido::Pedido( Orcamento& orcamento, int numPedido,  const string& cliente,  const string& materiais,  const string& status,  const string& enderecoServico)
    : Orcamento(orcamento), numPedido(numPedido), cliente(cliente), materiais(materiais), status(status), enderecoServico(enderecoServico) {
        cout << "Pedido criado com sucesso!" << endl;
    }

int Pedido::getNumPedido() const {
    return numPedido;
}

void Pedido::setNumPedido(int numPedido) {
    this->numPedido = numPedido;
}

string Pedido::getCliente() const {
    return cliente;
}

void Pedido::setCliente( string& cliente) {
    this->cliente = cliente;
}

string Pedido::getMateriais() const {
    return materiais;
}

void Pedido::setMateriais( string& materiais) {
    this->materiais = materiais;
}

string Pedido::getStatus() const {
    return status;
}

void Pedido::setStatus( string& status) {
    this->status = status;
}

string Pedido::getEnderecoServico() const {
    return enderecoServico;
}

void Pedido::setEnderecoServico( string& enderecoServico) {
    this->enderecoServico = enderecoServico;
}

int Pedido::getNumeroPedido() const {
    return numPedido; 
}

Pedido::Pedido( const Pedido& other) 
    : Orcamento(other), numPedido(other.numPedido), cliente(other.cliente), materiais(other.materiais), status(other.status), enderecoServico(other.enderecoServico) {
}

Pedido& Pedido::operator=(const Pedido& other) {
    if (this != &other) {
        Orcamento::operator=(other);
        numPedido = other.numPedido;
        cliente = other.cliente;
        materiais = other.materiais;
        status = other.status;
        enderecoServico = other.enderecoServico;
    }
    return *this;
}

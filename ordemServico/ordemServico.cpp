#include "ordemServico.hpp"
#include <iostream>

OrdemDeServico::OrdemDeServico()
    : Pedido(), descricao(""), pedido(0), produto(), materiais() {}

OrdemDeServico::OrdemDeServico(const Pedido& pedido, const std::string& descricao, int numPedido, const Produto& produto, const std::vector<Material>& materiais)
    : Pedido(pedido), descricao(descricao), pedido(numPedido), produto(produto), materiais(materiais) {}

std::string OrdemDeServico::getDescricao() const {
    return descricao;
}

void OrdemDeServico::setDescricao(const std::string& descricao) {
    this->descricao = descricao;
}

int OrdemDeServico::getPedido() const {
    return pedido;
}

void OrdemDeServico::setPedido(int pedido) {
    this->pedido = pedido;
}

Produto OrdemDeServico::getProduto() const {
    return produto;
}

void OrdemDeServico::setProduto(const Produto& produto) {
    this->produto = produto;
}

std::vector<Material> OrdemDeServico::getMateriais() const {
    return materiais;
}

void OrdemDeServico::setMateriais(const std::vector<Material>& materiais) {
    this->materiais = materiais;
}

OrdemDeServico::OrdemDeServico(const OrdemDeServico& other)
    : Pedido(other), descricao(other.descricao), pedido(other.pedido), produto(other.produto), materiais(other.materiais) {}

OrdemDeServico& OrdemDeServico::operator=(const OrdemDeServico& other) {
    if (this != &other) {
        Pedido::operator=(other);
        descricao = other.descricao;
        pedido = other.pedido;
        produto = other.produto;
        materiais = other.materiais;
    }
    return *this;
}

OrdemDeServico::OrdemDeServico(const std::string& descricao, int numeroPedido, const Produto& produto, const std::vector<Material>& materiais)
    : descricao(descricao), pedido(pedido), produto(produto), materiais(materiais) {
}

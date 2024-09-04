#include "pedidoMGR.hpp"
#include <iostream>

void PedidoMGR::criarPedido(const Pedido& pedido) {
    
    pedidoDAO.inserirPedido(pedido);
}

void PedidoMGR::atualizarPedido(const Pedido& pedido) {
    
    pedidoDAO.atualizarPedido(pedido);
}

void PedidoMGR::deletarPedido(int numPedido) {
    
    pedidoDAO.deletarPedido(numPedido);
}

Pedido PedidoMGR::buscarPedidoPorNumero(int numPedido) {
    
    return pedidoDAO.buscarPedidoPorNumero(numPedido);
}

vector<Pedido> PedidoMGR::listarPedidos() {
    
    return pedidoDAO.listarPedidos();
}

void PedidoMGR::exibirInformacoesPedido(int numPedido) {
    
    pedidoDAO.exibirInformacoesPedido(numPedido);
}

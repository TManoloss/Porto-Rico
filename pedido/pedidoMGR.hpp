#ifndef PEDIDO_MGR_HPP
#define PEDIDO_MGR_HPP

#include "pedido.hpp"
#include "pedidoDAO.hpp"

class PedidoMGR{
    private:
        PedidoDAO pedidoDAO;
    public:
        void criarPedido(const Pedido& pedido);
        void atualizarPedido(const Pedido& pedido);
        void deletarPedido(int numPedido);
        Pedido buscarPedidoPorNumero(int numPedido);
        vector<Pedido> listarPedidos();
        void exibirInformacoesPedido(int numPedido);
};

#endif
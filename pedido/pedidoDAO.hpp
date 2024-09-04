#ifndef PEDIDO_DAO_HPP
#define PEDIDO_DAO_HPP

#include <vector>
using std::vector;
#include "pedido.hpp"

class PedidoDAO {
private:
    vector<Pedido> pedidos; 

public:
    void inserirPedido(const Pedido& pedido);
    void atualizarPedido(const Pedido& pedido);
    void deletarPedido(int numPedido);
    Pedido buscarPedidoPorNumero(int numPedido);
    vector<Pedido> listarPedidos();
    void exibirInformacoesPedido(int numPedido);    
};

#endif 
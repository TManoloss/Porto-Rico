#include "pedidoDAO.hpp"

#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void PedidoDAO::inserirPedido(const Pedido& pedido){
    this->pedidos.push_back(pedido);
    cout << "Pedido inserido com sucesso!\n";
}

void PedidoDAO::atualizarPedido(const Pedido& pedido){
    for (auto& p : this->pedidos) {
        if (p.getNumPedido() == pedido.getNumPedido()) {
            p = pedido;
            cout << "Pedido atualizado com sucesso!\n";
            return;
        }
    }
    cout << "Pedido não encontrado para atualização!\n";
}

void PedidoDAO::deletarPedido(int numPedido){
    for (auto it = this->pedidos.begin(); it != this->pedidos.end(); ++it) {
        if (it->getNumPedido() == numPedido) {
            this->pedidos.erase(it);
            cout << "Pedido deletado com sucesso!\n";
            return;
        }
    }
    cout << "Pedido não encontrado para deleção!\n";
}

Pedido PedidoDAO::buscarPedidoPorNumero(int numPedido){
    for (const auto& pedido : this->pedidos) {
        if (pedido.getNumPedido() == numPedido) {
            return pedido;
        }
    }
    cout << "Pedido não encontrado!\n";
    return Pedido(); 
}

vector<Pedido> PedidoDAO::listarPedidos(){
    for (const auto& pedido : pedidos) {
        std::cout << "\nNúmero do Pedido: " << pedido.getNumPedido();
        std::cout << "\nStatus: " << pedido.getStatus();
        std::cout << "\nData de Vencimento: " << pedido.getDataVencimento();
    }
    cout << "Pedidos listados com sucesso!\n";
    return this->pedidos; 
}

void PedidoDAO::exibirInformacoesPedido(int numPedido) {
    Pedido pedido = buscarPedidoPorNumero(numPedido);
    if (pedido.getNumPedido() != 0) { 
        std::cout << "\nDetalhes do Pedido:\n";
        std::cout << "Número do Pedido: " << pedido.getNumPedido() << "\n";
        std::cout << "Cliente: " << pedido.getCliente() << "\n";
        for (const auto& produto : pedido.getProdutos()) {
            std::cout << "Produto: " << produto.getDescricao() << "\n";
        }
        std::cout << "Materiais: " << pedido.getMateriais() << "\n";
        std::cout << "Status: " << pedido.getStatus() << "\n";
        std::cout << "Endereço do Serviço: " << pedido.getEnderecoServico() << "\n";
        std::cout << "Descrição: " << pedido.getDescricao() << "\n";
        std::cout << "Serviço: " << pedido.getServico() << "\n";
        std::cout << "Quantidade: " << pedido.getQuantidade() << "\n";
        std::cout << "Data de Vencimento: " << pedido.getDataVencimento() << "\n";
        std::cout << "Valor: " << pedido.getValor() << "\n";
    } else {
        cout << "Pedido não encontrado!\n";
    }
}

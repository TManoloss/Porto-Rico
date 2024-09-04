#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "../orcamento/orcamento.hpp"
#include <string>
using std::string;

class Pedido : public Orcamento {
private:
    int numPedido;
    string cliente;
    string materiais;
    string status;
    string enderecoServico;

public:
    Pedido();   
    Pedido(Orcamento& orcamento, int numPedido, const string& cliente, const string& materiais, const string& status, const string& enderecoServico);

    // Getters e Setters
    int getNumPedido() const;
    void setNumPedido(int numPedido);

    string getCliente() const;
    void setCliente( string& cliente);

    string getMateriais() const;
    void setMateriais( string& materiais);

    string getStatus() const;
    void setStatus( string& status);

    string getEnderecoServico() const;
    void setEnderecoServico( string& enderecoServico);

    Produto getProduto() const; // Adicione esta linha para o getter
    Pedido(const Pedido& other);
    Pedido& operator=(const Pedido& other); 

    int getNumeroPedido() const; 
};

#endif 

#ifndef ORDEM_DE_SERVICO_HPP
#define ORDEM_DE_SERVICO_HPP

#include "../pedido/pedido.hpp"
#include <vector>
#include "../material/material.hpp" 

class OrdemDeServico : public Pedido {
private:
    std::string descricao;
    int pedido; 
    Produto produto;
    std::vector<Material> materiais;

public:
    OrdemDeServico();
    OrdemDeServico(const Pedido& pedido, const std::string& descricao, int numPedido, const Produto& produto, const std::vector<Material>& materiais);
    OrdemDeServico(const std::string& descricao, int numeroPedido, const Produto& produto, const std::vector<Material>& materiais);

    std::string getDescricao() const;
    void setDescricao(const std::string& descricao);

    int getPedido() const;
    void setPedido(int pedido);

    Produto getProduto() const;
    void setProduto(const Produto& produto);

    std::vector<Material> getMateriais() const;
    void setMateriais(const std::vector<Material>& materiais);

    OrdemDeServico(const OrdemDeServico& other);
    OrdemDeServico& operator=(const OrdemDeServico& other);
};

#endif 

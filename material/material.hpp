#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <string>
using std::string;

#include "../fornecedor/fornecedor.hpp"
#include "../produto/produto.hpp"

class Material{
    private:
        int id;
        string descricao;
        Fornecedor fornecedor;
        Produto produtoDestino;
        
    public:
        Material(); 
        Material(int id, string descricao, Fornecedor fornecedor, Produto produtoDestino);
        int getId() const;
        string getDescricao() const;
        Fornecedor getFornecedor() const;
        Produto getProdutoDestino() const;
        void setId(int id);
        void setDescricao(string descricao);
        void setFornecedor(Fornecedor fornecedor);
        void setProdutoDestino(Produto produtoDestino);
};
#endif
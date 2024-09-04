#ifndef PRODUTO_MGR_HPP
#define PRODUTO_MGR_HPP

#include <vector>
using std::vector;

#include "produto.hpp"
#include "produtoDAO.hpp"



class ProdutoManager{
    private:
        ProdutoDAO produtoDAO;
    public:
        void adicionarProduto(const Produto& produto);
        void atualizarProduto(const Produto& produto);
        void removerProduto(int id);
        Produto buscarProduto(int id);
        vector<Produto> listarTodosProdutos();
        vector<Produto> listarProdutosPorCategoria(const string& categoria);
        vector<Produto> listarProdutosPorStatus(const string& status);
        vector<Produto> listarProdutosPorServico(const string& servico);    
        void listarProdutoDetalhado(int id);    
};


#endif
#ifndef PRODUTO_DAO_HPP
#define PRODUTO_DAO_HPP
#include <vector>
using std::vector;


#include "produto.hpp"

class ProdutoDAO{
    private:
        vector<Produto> produtos;
        ProdutoDAO() {};
    public:
        static ProdutoDAO& getInstance();
        void gravarProduto(const Produto& produto);
        Produto buscarProduto(const string& descricao);
        void inserirProduto(const Produto& produto);
        void atualizarProduto(const Produto& produto);
        void deletarProduto(int id);
        Produto buscarProdutoPorId(int id);
        vector<Produto> listarProdutos();
        vector<Produto> listarProdutosPorCategoria(const string& categoria);
        vector<Produto> listarProdutosPorStatus(const string& status);
        vector<Produto> listarProdutosPorServico(const string& servico);
        void listarProdutoDetalhado(int id);
};

#endif
#include "produtoMGR.hpp"
#include <iostream>

void ProdutoManager::adicionarProduto(const Produto& produto){
    produtoDAO.inserirProduto(produto);
}

void ProdutoManager::atualizarProduto(const Produto& produto){
    produtoDAO.atualizarProduto(produto);
}

void ProdutoManager::removerProduto(int id){
    produtoDAO.deletarProduto(id);
}

Produto ProdutoManager::buscarProduto(int id){
    return produtoDAO.buscarProdutoPorId(id);
}

vector<Produto> ProdutoManager::listarTodosProdutos(){
    return produtoDAO.listarProdutos();
}

vector<Produto> ProdutoManager::listarProdutosPorCategoria(const string& categoria){
    return produtoDAO.listarProdutosPorCategoria(categoria);
}

vector<Produto> ProdutoManager::listarProdutosPorStatus(const string& status){
    return produtoDAO.listarProdutosPorStatus(status);
}

vector<Produto> ProdutoManager::listarProdutosPorServico(const string& servico){
    return produtoDAO.listarProdutosPorServico(servico);
}

void ProdutoManager::listarProdutoDetalhado(int id){
    produtoDAO.listarProdutoDetalhado(id);
}   
#include <iostream>
using std::cout;
using std::endl;

#include "produtoDAO.hpp"


void ProdutoDAO::inserirProduto(const Produto& produto) {
    produtos.push_back(produto);
}

void ProdutoDAO::atualizarProduto(const Produto& produto) {
    for(size_t i = 0; i < produtos.size(); i++){
        if(produtos[i].getId() == produto.getId()){
            produtos[i] = produto;
            break;
        }
    }
}

void ProdutoDAO::deletarProduto(int id) {
    if(id >= 0 && id < static_cast<int>(produtos.size())){
        produtos.erase(produtos.begin() + id);
        cout << "Produto deletado com sucesso!\n";
    }else{
        cout << "Produto não encontrado!\n";
    }
}

Produto ProdutoDAO::buscarProdutoPorId(int id) {
    if(id >= 0 && id < static_cast<int>(produtos.size())){
        return produtos[id];
    }else{
        cout << "Produto não encontrado!\n";
        return Produto(); 
    }
}

vector<Produto> ProdutoDAO::listarProdutos() {
    for(const auto& produto : produtos){
        cout <<"ID: " << produto.getId() << endl;
        cout <<"Descrição: " << produto.getDescricao() << endl;
        cout <<"Serviço: " << produto.getServico() << endl;
        cout <<"Quantidade: " << produto.getQuantidade() << endl;
        cout <<"Categoria: " << produto.getCategoria() << endl;
        cout <<"Status: " << produto.getStatus() << endl;
    }   
    return produtos;
}

vector<Produto> ProdutoDAO::listarProdutosPorCategoria(const string& categoria) {
    vector<Produto> produtosFiltrados; // Definindo o vetor filtrado
    for(const auto& produto : produtos){
        if(produto.getCategoria() == categoria){
            produtosFiltrados.push_back(produto); // Adicionando ao vetor filtrado
        }
    }
    for(const auto& produto : produtosFiltrados){
        listarProdutoDetalhado(produto.getId()); // Chama a função para listar detalhes
    }
    return produtosFiltrados; // Retorna o vetor filtrado
}

vector<Produto> ProdutoDAO::listarProdutosPorStatus(const string& status) {
    vector<Produto> produtosFiltrados; // Definindo o vetor filtrado
    for(const auto& produto : produtos){    
        if(produto.getStatus() == status){
            produtosFiltrados.push_back(produto); // Adicionando ao vetor filtrado
            listarProdutoDetalhado(produto.getId());
        }
    }
    return produtosFiltrados; // Retorna o vetor filtrado
}

vector<Produto> ProdutoDAO::listarProdutosPorServico(const string& servico) {
    vector<Produto> produtosFiltrados; // Definindo o vetor filtrado
    for(const auto& produto : produtos){        
        if(produto.getServico() == servico){
            produtosFiltrados.push_back(produto); // Adicionando ao vetor filtrado
            listarProdutoDetalhado(produto.getId());
        }
    }
    return produtosFiltrados; // Retorna o vetor filtrado
}

void ProdutoDAO::listarProdutoDetalhado(int id) {
    if(id >= 0 && id < static_cast<int>(produtos.size())){  
        cout << "ID: " << produtos[id].getId() << endl;
        cout << "Descrição: " << produtos[id].getDescricao() << endl;
        cout << "Serviço: " << produtos[id].getServico() << endl;
        cout << "Quantidade: " << produtos[id].getQuantidade() << endl;
        cout << "Categoria: " << produtos[id].getCategoria() << endl;
        cout << "Status: " << produtos[id].getStatus() << endl;
    }else{
        cout << "Produto não encontrado!\n";
    }
}
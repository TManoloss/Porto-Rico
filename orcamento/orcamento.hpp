#ifndef ORCAMENTO_HPP
#define ORCAMENTO_HPP
#include <string>
using std::string;
#include <iostream>
using std::cout;
#include <vector>
using std::vector;

#include "../produto/produto.hpp"
class Orcamento{
    private:
        int id;
        string descricao;
        string servico;
        int quantidade;
        string dataVencimento;
        std::vector<Produto> produtos; 
        double valor;
    public:
        Orcamento() ;
        Orcamento(
            int id,
            string descricao, 
            string servico, 
            int quantidade, 
            string dataVencimento, 
            vector<Produto> produtos, 
            double valor);
        //getters
        string getDescricao() const;
        string getServico() const;
        int getQuantidade() const;
        string getDataVencimento() const;
        vector<Produto> getProdutos() const;
        double getValor() const;
        int getId() const;
        //setters
        void setDescricao(string descricao);
        void setServico(string servico);
        void setQuantidade(int quantidade);
        void setDataVencimento(string dataVencimento);
        void setProdutos(vector<Produto> produtos);
        void setValor(double valor);
        void setId(int id);
};
#endif


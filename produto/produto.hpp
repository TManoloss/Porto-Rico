#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;



class Produto{
    private:
        int id;
        string descricao;
        string servico;
        int quantidade;
        string categoria;  
        string status; 
    public:
        Produto();
        Produto(int id, string descricao, string servico, int quantidade, string categoria, string status);
        //getters
        int getId() const;
        string getDescricao() const;
        string getServico() const;
        int getQuantidade() const;
        string getCategoria() const;
        string getStatus() const;
        //setters
        void setId(int id);
        void setDescricao(string descricao);
        void setServico(string servico);
        void setQuantidade(int quantidade);
        void setCategoria(string categoria);
        void setStatus(string status);
};

#endif 
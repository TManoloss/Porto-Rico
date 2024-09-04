#include <string>
using std::string;
#include <iostream>
using std::cout;

#include "produto.hpp"

Produto::Produto() : id(0), descricao(""), servico(""), quantidade(0), categoria(""), status("") {}

Produto::Produto(int id, string descricao, string servico, int quantidade, string categoria, string status):
id(id), descricao(descricao), servico(servico), quantidade(quantidade), categoria(categoria), status(status){
    cout << "Produto criado com sucesso!\n";
};

int Produto::getId() const { return id; }
string Produto::getDescricao() const { return descricao; }
string Produto::getServico() const { return servico; }
int Produto::getQuantidade() const { return quantidade; }
string Produto::getCategoria() const { return categoria; }
string Produto::getStatus() const { return status; }

void Produto::setId(int id){ this->id = id; }
void Produto::setDescricao(string descricao) {this->descricao = descricao; }
void Produto::setServico(string servico){ this->servico = servico;}
void Produto::setQuantidade(int quantidade){ this->quantidade = quantidade;}
void Produto::setCategoria(string categoria){ this->categoria = categoria; }
void Produto::setStatus(string status){ this->status = status; }
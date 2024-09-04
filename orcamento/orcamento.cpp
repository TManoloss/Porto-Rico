#include "orcamento.hpp"
#include "../produto/produto.hpp"
#include <iostream>
using std::cout;

Orcamento::Orcamento(): 
id(0),
descricao(""),
servico(""),
quantidade(0),
dataVencimento(""),
produtos(vector<Produto>()),
valor(0.0)
{}

Orcamento::Orcamento(int id, string descricao, string servico, int quantidade, string dataVencimento, vector<Produto> produtos, double valor):
    id(id),
    descricao(descricao),
    servico(servico), 
    quantidade(quantidade),
    dataVencimento(dataVencimento),
    produtos(produtos),
    valor(valor)  
{
    cout << "Orcamento criado com sucesso!\n";
};

int Orcamento::getId() const{ return id; }
string Orcamento::getDescricao() const{ return descricao; }
string Orcamento::getServico() const{ return servico; }
int Orcamento::getQuantidade() const{ return quantidade; }
string Orcamento::getDataVencimento() const{ return dataVencimento; }
vector<Produto> Orcamento::getProdutos() const{ return produtos; }
double Orcamento::getValor() const{ return valor; }

void Orcamento::setId(int id){ this->id = id; }
void Orcamento::setDescricao(string descricao){ this->descricao = descricao; }
void Orcamento::setServico(string servico){ this->servico = servico; }
void Orcamento::setQuantidade(int quantidade){ this->quantidade = quantidade; }
void Orcamento::setDataVencimento(string dataVencimento){ this->dataVencimento = dataVencimento; }
void Orcamento::setProdutos(vector<Produto> produtos){ this->produtos = produtos; }
void Orcamento::setValor(double valor){ this->valor = valor; }

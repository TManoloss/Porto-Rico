#include "material.hpp"
#include <iostream>
using std::cout;

Material::Material(): id(0), descricao(""), fornecedor(Fornecedor()), produtoDestino(Produto()) {}

Material::Material(int id, string descricao, Fornecedor fornecedor, Produto produtoDestino):
id(id),
descricao(descricao),
fornecedor(fornecedor),
produtoDestino(produtoDestino){
    cout << "Material criado com sucesso!\n";
}

int Material::getId() const{ return this->id; }
string Material::getDescricao() const{ return this->descricao; }
Fornecedor Material::getFornecedor() const{ return this->fornecedor; }
Produto Material::getProdutoDestino() const{ return this->produtoDestino; }

void Material::setId(int id){ this->id = id; }
void Material::setDescricao(string descricao){ this->descricao = descricao; }
void Material::setFornecedor(Fornecedor fornecedor){ this->fornecedor = fornecedor; }
void Material::setProdutoDestino(Produto produtoDestino){ this->produtoDestino = produtoDestino; }

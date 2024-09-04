#include <string>
using std::string;
#include <iostream>
using std::cout;

#include "fornecedor.hpp"

Fornecedor::Fornecedor() : id(0), nome(""), cnpj(""), email(""), telefone(""), endereco(""), cidade(""), estado(""), cep(""){}

Fornecedor::Fornecedor( int id, string nome, string cnpj, string email, string telefone, string endereco, string cidade, string estado, string cep):
id(id), nome(nome), cnpj(cnpj), email(email), telefone(telefone), endereco(endereco), cidade(cidade),estado(estado), cep(cep){
    cout << "Fornecedor cadastrado com sucesso\n";
}

int Fornecedor::getId() const{ return id;}
string Fornecedor::getNome() const{ return nome;}
string Fornecedor::getCnpj() const{ return cnpj;}
string Fornecedor::getEmail() const { return email;}
string Fornecedor::getTelefone() const { return telefone;}
string Fornecedor::getEndereco() const { return endereco;}
string Fornecedor::getCidade() const { return cidade;}
string Fornecedor::getEstado() const { return estado;}
string Fornecedor::getCep() const { return cep;}

void Fornecedor::setId(int id){ this->id = id;} 
void Fornecedor::setNome(string nome){ this->nome = nome;}
void Fornecedor::setCnpj(string cnpj){ this->cnpj = cnpj;}
void Fornecedor::setEmail(string email){ this->email = email;}
void Fornecedor::setTelefone(string telefone){ this->telefone = telefone;}
void Fornecedor::setEndereco(string endereco){ this->endereco = endereco;}
void Fornecedor::setCidade(string cidade){ this->cidade = cidade;}
void Fornecedor::setEstado(string estado){ this->estado = estado;}
void Fornecedor::setCep(string cep){ this->cep = cep;}











#include "cliente.hpp"
#include <iostream>
using std::cout;


Cliente::Cliente(): id(0), nome(""), cpf(""), email(""), telefone(""), endereco(""), cidade(""), estado(""), cep(""){}

Cliente::Cliente(int id, string nome, string cpf, string email, string telefone, string endereco, string cidade, string estado, string cep):
id(id), nome(nome), cpf(cpf), email(email), telefone(telefone), endereco(endereco), cidade(cidade), estado(estado), cep(cep){
  cout << "Cliente criado com sucesso!\n";
}

int Cliente::getId() const{ return id; }
string Cliente::getNome() const{ return nome; }
string Cliente::getCpf() const{ return cpf; }
string Cliente::getEmail() const{ return email; }
string Cliente::getTelefone() const{ return telefone; }
string Cliente::getEndereco() const{ return endereco; }
string Cliente::getCidade() const{ return cidade; }
string Cliente::getEstado() const{ return estado; }
string Cliente::getCep() const{ return cep; }

void Cliente::setNome(string nome){ this->nome = nome; }
void Cliente::setCpf(string cpf){ this->cpf = cpf; }
void Cliente::setEmail(string email){ this->email = email; }
void Cliente::setTelefone(string telefone){ this->telefone = telefone; }
void Cliente::setEndereco(string endereco){ this->endereco = endereco; }
void Cliente::setCidade(string cidade){ this->cidade = cidade; }
void Cliente::setEstado(string estado){ this->estado = estado; }
void Cliente::setCep(string cep){ this->cep = cep; }

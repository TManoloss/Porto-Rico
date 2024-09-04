#include "funcionario.hpp"
#include <iostream>
using std::cout;

Funcionario::Funcionario():
nome(""), cpf(""), email(""), telefone(""), endereco(""), cidade(""), estado(""), cep(""){}

Funcionario::Funcionario(string nome, string cpf, string email, string telefone, string endereco, string cidade, string estado, string cep):
nome(nome), cpf(cpf), email(email), telefone(telefone), endereco(endereco), cidade(cidade), estado(estado), cep(cep){
  cout << "Funcionario criado com sucesso!\n";
}

string Funcionario::getNome() const{ return nome; }
string Funcionario::getCpf() const{ return cpf; }
string Funcionario::getEmail() const{ return email; }
string Funcionario::getTelefone() const{ return telefone; }
string Funcionario::getEndereco() const{ return endereco; }
string Funcionario::getCidade() const{ return cidade; }
string Funcionario::getEstado() const{ return estado; }
string Funcionario::getCep() const{ return cep; }

void Funcionario::setNome(string nome){ this->nome = nome; }
void Funcionario::setCpf(string cpf){ this->cpf = cpf; }
void Funcionario::setEmail(string email){ this->email = email; }
void Funcionario::setTelefone(string telefone){ this->telefone = telefone; }
void Funcionario::setEndereco(string endereco){ this->endereco = endereco; }
void Funcionario::setCidade(string cidade){ this->cidade = cidade; }
void Funcionario::setEstado(string estado){ this->estado = estado; }
void Funcionario::setCep(string cep){ this->cep = cep; }
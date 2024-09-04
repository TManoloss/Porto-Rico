#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <string>
using std::string;
#include <iostream>
using std::cout;

class Funcionario{
    private:
        string nome;
        string cpf;
        string email;
        string telefone;
        string endereco;
        string cidade;
        string estado;
        string cep;
    public:
        Funcionario() : nome(""), cpf(""), email(""), telefone(""), endereco(""), cidade(""), estado(""), cep("") {};
        Funcionario(string nome, 
        string cpf, 
        string email, 
        string telefone, 
        string endereco, 
        string cidade, 
        string estado, 
        string cep);
        //getters
        string getNome() const;
        string getCpf() const;
        string getEmail() const;
        string getTelefone() const;
        string getEndereco() const;
        string getCidade() const;
        string getEstado() const;
        string getCep() const;
        //setters
        void setNome(string nome);
        void setCpf(string cpf);
        void setEmail(string email);
        void setTelefone(string telefone);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(string cep);
};
#endif
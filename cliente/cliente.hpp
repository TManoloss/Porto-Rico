#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;

class Cliente{
    private:
        int id;
        std::string nome;
        string cpf;
        string email;
        string telefone;
        string endereco;
        string cidade;
        string estado;
        string cep;
    public:
        Cliente() ;
        Cliente(int id, string nome, 
        string cpf, 
        string email, 
        string telefone, 
        string endereco, 
        string cidade, 
        string estado, 
        string cep);
        //getters
        int getId() const;
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

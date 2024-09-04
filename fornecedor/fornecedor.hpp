#ifndef FORNECEDOR_HPP
#define FORNECEDOR_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;

class Fornecedor{
    private:
        int id; 
        string nome;
        string cnpj;
        string email;
        string telefone;
        string endereco;
        string cidade;
        string estado;
        string cep;
    public:
        Fornecedor();
        Fornecedor(int id,
        string nome, 
        string cnpj, 
        string email, 
        string telefone, 
        string endereco, 
        string cidade, 
        string estado, 
        string cep
        );
        //getters
        int getId() const;
        string getNome() const;
        string getCnpj() const;
        string getEmail() const;
        string getTelefone() const;
        string getEndereco() const;
        string getCidade() const;
        string getEstado() const;
        string getCep() const;
        //setters
        void setId(int id);
        void setNome(string nome);
        void setCnpj(string cnpj);
        void setEmail(string email);
        void setTelefone(string telefone);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(string cep);
};

#endif
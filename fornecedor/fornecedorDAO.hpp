#ifndef FORNECEDOR_DAO_HPP
#define FORNECEDOR_DAO_HPP

#include <vector>
using std::vector;

#include "fornecedor.hpp"

class FornecedorDAO{
    private:
        vector<Fornecedor> fornecedores;
        FornecedorDAO() {};

    public:
    static FornecedorDAO& getInstance();
        void cadastrarFornecedor(const Fornecedor& fornecedor);
        Fornecedor buscarFornecedor(const int& id);
        void atualizarFornecedor(const Fornecedor& fornecedor);
        void deletarFornecedor(int id);         
        vector<Fornecedor> listarFornecedores();
        void listarFornecedoresDetalhados();
};

#endif
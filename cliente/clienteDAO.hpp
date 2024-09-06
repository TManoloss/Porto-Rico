#ifndef CLIENTE_DAO_HPP
#define CLIENTE_DAO_HPP

#include "cliente.hpp"
#include <vector>
using std::vector;

class ClienteDAO{
    private:
        vector<Cliente> clientes;
        ClienteDAO() {};  // Construtor privado para Singleton
    public:
        static ClienteDAO& getInstance();  // Método Singleton
        void cadastrarCliente(const Cliente& cliente);
        Cliente buscarCliente(const int& id);
        void atualizarCliente(const Cliente& cliente);
        void deletarCliente(const int& id);
        vector<Cliente> listarClientes();
        void listarClientesDetalhados();  // Correção do nome
};

#endif

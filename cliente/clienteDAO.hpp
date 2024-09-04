#ifndef CLIENTE_DAO_HPP
#define CLIENTE_DAO_HPP

#include "cliente.hpp"
#include <vector>
using std::vector;

class ClienteDAO{
    private:
        vector<Cliente> clientes;
    public:
        ClienteDAO();
        void cadastrarCliente(const Cliente& cliente);
        Cliente buscarCliente(const int& id);
        void atualizarCliente(const Cliente& cliente);
        void deletarCliente(const int& id);
        vector<Cliente> listarClientes();
        void listarCLientesDetalhados();
};



#endif 

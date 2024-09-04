#ifndef CLIENTE_MGR_HPP
#define CLIENTE_MGR_HPP

#include "clienteDAO.hpp"

class ClienteMGR{
    private:
        ClienteDAO clienteDAO;
        int id;
    public:
        ClienteMGR();
        void cadastrarCliente(const Cliente& cliente);
        Cliente buscarCliente(const int& id);
        void atualizarCliente(const Cliente& cliente);
        void deletarCliente(const int& id);
        vector<Cliente> listarClientes();
        void listarCLientesDetalhados();
};
#endif 
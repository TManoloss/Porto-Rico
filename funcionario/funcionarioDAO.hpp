#ifndef FUNCIONARIO_DAO_HPP
#define FUNCIONARIO_DAO_HPP

#include "funcionario.hpp"
#include <vector>
using std::vector;

class FuncionarioDAO{
    private:
        vector<Funcionario> funcionarios;
    public:
    static FuncionarioDAO& getInstance();
        void adicionarFuncionario(const Funcionario& funcionario);
        void removerFuncionario(string cpf);
        Funcionario buscarFuncionario(string cpf) const;
        void atualizarFuncionario(string cpf, const Funcionario& funcionario);
        vector<Funcionario> listarFuncionarios() const;
};
#endif
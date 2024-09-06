#ifndef FUNCIONARIO_MGR_HPP
#define FUNCIONARIO_MGR_HPP

#include "funcionarioDAO.hpp"

class FuncionarioMGR{
    private:
        FuncionarioDAO funcionarioDAO;
        FuncionarioMGR(): funcionarioDAO(FuncionarioDAO::getInstance()){}
    public:
    static FuncionarioMGR& getInstance(){
        static FuncionarioMGR instance;
        return instance;
    }   
        void adicionarFuncionario(const Funcionario& funcionario);
        void removerFuncionario(string cpf);
        Funcionario buscarFuncionario(string cpf) const;
        void atualizarFuncionario(string cpf, const Funcionario& funcionario);
        vector<Funcionario> listarFuncionarios() const;
};
#endif
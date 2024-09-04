#include "funcionarioMGR.hpp"

void FuncionarioMGR::adicionarFuncionario(const Funcionario& funcionario){
    funcionarioDAO.adicionarFuncionario(funcionario);
}

void FuncionarioMGR::removerFuncionario(string cpf){
    funcionarioDAO.removerFuncionario(cpf);
}

Funcionario FuncionarioMGR::buscarFuncionario(string cpf) const{
    return funcionarioDAO.buscarFuncionario(cpf);
}

void FuncionarioMGR::atualizarFuncionario(string cpf, const Funcionario& funcionario){
    funcionarioDAO.atualizarFuncionario(cpf, funcionario);
}

vector<Funcionario> FuncionarioMGR::listarFuncionarios() const{
    return funcionarioDAO.listarFuncionarios();
}

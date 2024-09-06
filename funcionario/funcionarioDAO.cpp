#include "funcionarioDAO.hpp"


FuncionarioDAO& FuncionarioDAO::getInstance() {
    static FuncionarioDAO instance;  // Cria a instância uma única vez
    return instance;  // Retorna a referência à instância
}

void FuncionarioDAO::adicionarFuncionario(const Funcionario& funcionario){
    funcionarios.push_back(funcionario);
}

void FuncionarioDAO::removerFuncionario(string cpf){
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i].getCpf() == cpf){
            funcionarios.erase(funcionarios.begin() + i);
            break;
        }
    }
}

Funcionario FuncionarioDAO::buscarFuncionario(string cpf) const{
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i].getCpf() == cpf){
            return funcionarios[i];
        }
    }
    return Funcionario();
}       

void FuncionarioDAO::atualizarFuncionario(string cpf, const Funcionario& funcionario){
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i].getCpf() == cpf){
            funcionarios[i] = funcionario;
            break;
        }
    }
}

vector<Funcionario> FuncionarioDAO::listarFuncionarios() const{
    return funcionarios;
}

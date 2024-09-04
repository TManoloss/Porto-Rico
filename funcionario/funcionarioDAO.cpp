#include "funcionarioDAO.hpp"

FuncionarioDAO::FuncionarioDAO(){
    Funcionario f1("Sophia Lima", "1234567890", "sophialima@gmail.com", "44 9999", "Rua 1", "Sao Paulo", "SP", "12345678");  
    funcionarios.push_back(f1);   
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

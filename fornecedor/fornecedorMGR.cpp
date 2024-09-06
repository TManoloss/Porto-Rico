#include "fornecedorMGR.hpp"


void FornecedorMGR::cadastrarFornecedor(const Fornecedor& fornecedor) {
    fornecedorDAO.cadastrarFornecedor(fornecedor);
}

Fornecedor FornecedorMGR::buscarFornecedor(const int& id) {
    return fornecedorDAO.buscarFornecedor(id);
}



void FornecedorMGR::atualizarFornecedor(const Fornecedor& fornecedor) {
    fornecedorDAO.atualizarFornecedor(fornecedor);
}

void FornecedorMGR::deletarFornecedor(int id) {
    fornecedorDAO.deletarFornecedor(id);
}

vector<Fornecedor> FornecedorMGR::listarFornecedores() {
    return fornecedorDAO.listarFornecedores();
}

void FornecedorMGR::listarFornecedoresDetalhados() {
    fornecedorDAO.listarFornecedoresDetalhados();
}


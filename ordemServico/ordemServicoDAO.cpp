#include "ordemServicoDAO.hpp"
#include <iostream>
#include <vector>
using std::cout;


OrdemServicoDAO& OrdemServicoDAO::getInstance() {
    static OrdemServicoDAO instance;  // Cria a instância uma única vez
    return instance;  // Retorna a referência à instância
}

void OrdemServicoDAO::inserirOrdemDeServico(const OrdemDeServico& ordem) {
    ordensDeServico.push_back(ordem);
    cout << "Ordem de Serviço inserida com sucesso!\n";
}

void OrdemServicoDAO::atualizarOrdemDeServico(const OrdemDeServico& ordem) {
    for (auto& o : ordensDeServico) {
        if (o.getPedido() == ordem.getPedido()) {
            o = ordem;
            cout << "Ordem de Serviço atualizada com sucesso!\n";
            return;
        }
    }
    cout << "Ordem de Serviço não encontrada para atualização!\n";
}

void OrdemServicoDAO::deletarOrdemDeServico(int numeroOrdem) {
    for (auto it = ordensDeServico.begin(); it != ordensDeServico.end(); ++it) {
        if (it->getPedido() == numeroOrdem) {
            ordensDeServico.erase(it);
            cout << "Ordem de Serviço deletada com sucesso!\n";
            return;
        }
    }
    cout << "Ordem de Serviço não encontrada para deleção!\n";
}

OrdemDeServico OrdemServicoDAO::buscarOrdemDeServicoPorNumero(int numeroOrdem) {
    for (const auto& ordem : ordensDeServico) {
        if (ordem.getPedido() == numeroOrdem) {
            return ordem;
        }
    }
    cout << "Ordem de Serviço não encontrada!\n";
    return OrdemDeServico(); 
}

std::vector<OrdemDeServico> OrdemServicoDAO::listarOrdensDeServico() {
    for (const auto& ordem : ordensDeServico) {
        std::cout << "\nNúmero da Ordem de Serviço: " << ordem.getPedido();
        std::cout << "\nDescrição: " << ordem.getDescricao();
        std::cout << "\nProduto: " << ordem.getProduto().getDescricao();
    }
    cout << "Ordens de Serviço listadas com sucesso!\n";
    return ordensDeServico;
}

void OrdemServicoDAO::exibirInformacoesOrdemDeServico(const OrdemDeServico& ordem) {
    if (ordem.getPedido() != 0) { 
        std::cout << "\nDetalhes da Ordem de Serviço:\n";
        std::cout << "Número da Ordem de Serviço: " << ordem.getPedido() << "\n";
        std::cout << "Descrição: " << ordem.getDescricao() << "\n";
        std::cout << "Produto: " << ordem.getProduto().getDescricao() << "\n";
        std::cout << "Materiais:\n";
        for (const auto& material : ordem.getMateriais()) {
            std::cout << " - " << material.getDescricao() << "\n";
        }
    } else {
        cout << "Ordem de Serviço não encontrada!\n";
    }
}


OrdemDeServico OrdemServicoDAO::buscarOrdemDeServicoPorIddoPedido(int idPedido) {
    for (const auto& ordem : ordensDeServico) {
        if (ordem.getPedido() == idPedido) {
            return ordem;  // Retorna a ordem de serviço encontrada
        }
    }
    cout << "Ordem de Serviço não encontrada!\n";  // Mensagem de erro
    return OrdemDeServico();  // Retorna uma nova instância se não encontrada
}



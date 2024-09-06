#include "ordemServicoMGR.hpp"
#include <iostream>

void OrdemServicoMGR::criarOrdemDeServico(const OrdemDeServico& ordem) {
    ordemServicoDAO.inserirOrdemDeServico(ordem);
}

void OrdemServicoMGR::atualizarOrdemDeServico(const OrdemDeServico& ordem) {
    ordemServicoDAO.atualizarOrdemDeServico(ordem);
}

void OrdemServicoMGR::deletarOrdemDeServico(int numeroOrdem) {
    ordemServicoDAO.deletarOrdemDeServico(numeroOrdem);
}

OrdemDeServico OrdemServicoMGR::buscarOrdemDeServicoPorNumero(int numeroOrdem) {
    return ordemServicoDAO.buscarOrdemDeServicoPorNumero(numeroOrdem);
}

std::vector<OrdemDeServico> OrdemServicoMGR::listarOrdensDeServico() {
    return ordemServicoDAO.listarOrdensDeServico();
}
    
void OrdemServicoMGR::exibirInformacoesOrdemDeServico(const OrdemDeServico& ordem) {
    ordemServicoDAO.exibirInformacoesOrdemDeServico(ordem);
}

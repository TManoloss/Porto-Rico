#ifndef ORDEM_SERVICO_DAO_HPP
#define ORDEM_SERVICO_DAO_HPP

#include "ordemServico.hpp"
#include <vector>

class OrdemServicoDAO {
private:
    std::vector<OrdemDeServico> ordensDeServico;

public:
    void inserirOrdemDeServico(const OrdemDeServico& ordem);
    void atualizarOrdemDeServico(const OrdemDeServico& ordem);
    void deletarOrdemDeServico(int numeroOrdem);
    OrdemDeServico buscarOrdemDeServicoPorNumero(int numeroOrdem);
    std::vector<OrdemDeServico> listarOrdensDeServico();
    void exibirInformacoesOrdemDeServico(int numeroOrdem);
};

#endif

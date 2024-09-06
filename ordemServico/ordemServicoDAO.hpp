#ifndef ORDEM_SERVICO_DAO_HPP
#define ORDEM_SERVICO_DAO_HPP

#include "ordemServico.hpp"
#include <vector>

class OrdemServicoDAO {
private:
    std::vector<OrdemDeServico> ordensDeServico;
    OrdemServicoDAO() {};   

public:
    static OrdemServicoDAO& getInstance();
    void inserirOrdemDeServico(const OrdemDeServico& ordem);
    void atualizarOrdemDeServico(const OrdemDeServico& ordem);
    void deletarOrdemDeServico(int numeroOrdem);
    OrdemDeServico buscarOrdemDeServicoPorNumero(int numeroOrdem);
    std::vector<OrdemDeServico> listarOrdensDeServico();
    void exibirInformacoesOrdemDeServico(const OrdemDeServico& ordem);
};

#endif

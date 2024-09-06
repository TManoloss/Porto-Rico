#ifndef ORDEM_SERVICO_MGR_HPP
#define ORDEM_SERVICO_MGR_HPP

#include "ordemServicoDAO.hpp"
#include <vector>

class OrdemServicoMGR {
private:
    OrdemServicoDAO ordemServicoDAO;
    OrdemServicoMGR(): ordemServicoDAO(OrdemServicoDAO::getInstance()){}

public:
    static OrdemServicoMGR& getInstance(){
        static OrdemServicoMGR instance;
        return instance;
    }
    void criarOrdemDeServico(const OrdemDeServico& ordem);
    void atualizarOrdemDeServico(const OrdemDeServico& ordem);
    void deletarOrdemDeServico(int numeroOrdem);
    OrdemDeServico buscarOrdemDeServicoPorNumero(int numeroOrdem);
    std::vector<OrdemDeServico> listarOrdensDeServico();
    void exibirInformacoesOrdemDeServico(const OrdemDeServico& ordem);
    OrdemDeServico buscarOrdemDeServicoPorIddoPedido(int idPedido);

};

#endif 

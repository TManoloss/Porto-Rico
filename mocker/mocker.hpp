#ifndef MOCKER_HPP
#define MOCKER_HPP

#include "../cliente/clienteMGR.hpp"
#include "../fornecedor/fornecedorMGR.hpp"
#include "../produto/produtoMGR.hpp"
#include "../material/materialMGR.hpp"
#include "../orcamento/orcamentoMGR.hpp"
#include "../pedido/pedidoMGR.hpp"
#include "../ordemServico/ordemServicoMGR.hpp"  


class Mocker {
    private: 
    ClienteMGR clienteMgr;
    FornecedorMGR fornecedorMgr;
    ProdutoManager produtoMgr;
    MaterialMGR materialMgr;
    OrcamentoMgr orcamentoMgr;
    PedidoMGR pedidoMgr;
    OrdemServicoMGR ordemServicoMgr;
    
    Mocker(): clienteMgr(ClienteMGR::getInstance()),
    fornecedorMgr(FornecedorMGR::getInstance()), 
    produtoMgr(ProdutoManager::getInstance()), 
    materialMgr(MaterialMGR::getInstance()), 
    orcamentoMgr(OrcamentoMgr::getInstance()), 
    pedidoMgr(PedidoMGR::getInstance()), 
    ordemServicoMgr(OrdemServicoMGR::getInstance()) {}
public:
    static Mocker& getInstance(){
        static Mocker instance;
        return instance;
    }
    
    void mockData();
};

#endif
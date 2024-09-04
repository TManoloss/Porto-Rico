

#include <iostream>

#include "orcamentoMGR.hpp"

void OrcamentoMgr::adicionarOrcamento(const Orcamento& orcamento){
    orcamentoDAO.adicionarOrcamento(orcamento);
}

void OrcamentoMgr::removerOrcamento(int id){
    orcamentoDAO.removerOrcamento(id);
}

Orcamento OrcamentoMgr::buscarOrcamento(int id) const{
    return orcamentoDAO.buscarOrcamento(id);
}

void OrcamentoMgr::atualizarOrcamento(int id, const Orcamento& orcamento){
    orcamentoDAO.atualizarOrcamento(id, orcamento);
}   

vector<Orcamento> OrcamentoMgr::listarOrcamentos() const{
    return orcamentoDAO.listarOrcamentos();
}    

void OrcamentoMgr::imprimirOrcamentoDetalhado(const Orcamento& orcamento){
    orcamentoDAO.imprimirOrcamentoDetalhado(orcamento);
}
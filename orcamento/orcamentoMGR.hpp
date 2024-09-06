#ifndef ORCAMENTO_MGR_HPP
#define ORCAMENTO_MGR_HPP
#include "orcamentoDAO.hpp"
#include <vector>
using std::vector;
class OrcamentoMgr {
    private:
        OrcamentoDAO orcamentoDAO;
        OrcamentoMgr(): orcamentoDAO(OrcamentoDAO::getInstance()){}
    public:
        static OrcamentoMgr& getInstance(){
            static OrcamentoMgr instance;
            return instance;
        }
        void adicionarOrcamento(const Orcamento& orcamento);
        void removerOrcamento(int id);
        Orcamento buscarOrcamento(int id) const;
        void atualizarOrcamento(int id, const Orcamento& orcamento);  
        void imprimirOrcamentoDetalhado(const Orcamento& orcamento);
        vector<Orcamento> listarOrcamentos() const;
    
};
#endif
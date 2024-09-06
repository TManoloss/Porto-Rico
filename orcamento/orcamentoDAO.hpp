#ifndef ORCAMENTO_DAO_HPP
#define ORCAMENTO_DAO_HPP

#include "orcamento.hpp"
#include <vector>
using std::vector;

class OrcamentoDAO{
    private:
        vector<Orcamento> orcamentos;
        OrcamentoDAO() {};
    public:
        static OrcamentoDAO& getInstance();
        void adicionarOrcamento(const Orcamento& orcamento);
        void removerOrcamento(int id);
        Orcamento buscarOrcamento(int id) const;
        void atualizarOrcamento(int id, const Orcamento& orcamento); 
        void imprimirOrcamentoDetalhado(const Orcamento& orcamento);   
        vector<Orcamento> listarOrcamentos() const;
};
#endif
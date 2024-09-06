#include "orcamentoDAO.hpp"

OrcamentoDAO& OrcamentoDAO::getInstance() {
    static OrcamentoDAO instance;  // Cria a instância uma única vez
    return instance;  // Retorna a referência à instância
}

void OrcamentoDAO::adicionarOrcamento(const Orcamento& orcamento){
    
    orcamentos.push_back(orcamento);
}

void OrcamentoDAO::removerOrcamento(int id){
    for(size_t i = 0; i < orcamentos.size(); i++){
        if(orcamentos[i].getId() == id){
            orcamentos.erase(orcamentos.begin() + i);   
            break;
        }
    }
}

Orcamento OrcamentoDAO::buscarOrcamento(int id) const{
    for(const auto& orcamento : orcamentos){
        if(orcamento.getId() == id){    
            return orcamento;
        }
    }
    return Orcamento();
}

void OrcamentoDAO::atualizarOrcamento(int id, const Orcamento& orcamento){
    for(auto& o : orcamentos){  
        if(o.getId() == id){
            o = orcamento;
            break;
        }
    }
}

vector<Orcamento> OrcamentoDAO::listarOrcamentos() const{
    for(const auto& orcamento : orcamentos){
        std::cout << "\nNúmero do Pedido: " <<  orcamento.getId();
        std::cout << "\nDescrição: " << orcamento.getDescricao();
        std::cout << "\nData de Vencimento: " << orcamento.getDataVencimento();
    }  
    cout << "Orcamentos listados com sucesso!\n";
    return orcamentos;
}


void OrcamentoDAO::imprimirOrcamentoDetalhado(const Orcamento& orcamento){
    std::cout <<"------------------------\n"
              << "ID: " << orcamento.getId() << "\n"
              << "Descrição: " << orcamento.getDescricao() << "\n"
              << "Serviço: " << orcamento.getServico() << "\n"
              << "Quantidade: " << orcamento.getQuantidade() << "\n"
              << "Data de Validade: " << orcamento.getDataVencimento() << "\n"
              << "Valor: " << orcamento.getValor() << "\n"
              << "Produtos: " << "\n";
    for(const auto& produto : orcamento.getProdutos()){
        std::cout << "Produto ID: " << produto.getId() << "\n"
                  << "Produto Nome: " << produto.getDescricao() << "\n"
                  << "------------------------\n";
    }
}
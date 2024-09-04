#ifndef ADMIN_HPP
#define ADMIN_HPP

#include <string>
#include "../cliente/clienteMGR.hpp"
#include "../fornecedor/fornecedorMGR.hpp"
#include "../produto/produtoMGR.hpp"
#include "../material/materialMGR.hpp"
#include "../orcamento/orcamentoMGR.hpp"
#include "../pedido/pedidoMGR.hpp"
#include "../ordemServico/ordemServicoMGR.hpp"

class Admin {
private:
    std::string login;
    std::string senha;

    ClienteMGR clienteMgr;
    FornecedorMGR fornecedorMgr;
    ProdutoManager produtoMgr;
    MaterialMGR materialMgr;
    OrcamentoMgr orcamentoMgr;
    PedidoMGR pedidoMgr;
    OrdemServicoMGR ordemServicoMgr;

public:
    Admin(const std::string& login = "adm", const std::string& senha = "adm");

    bool autenticar(const std::string& login, const std::string& senha);
    
    // Métodos para acessar as funcionalidades do sistema
    ClienteMGR& getClienteMgr();
    FornecedorMGR& getFornecedorMgr();
    ProdutoManager& getProdutoMgr();
    MaterialMGR& getMaterialMgr();
    OrcamentoMgr& getOrcamentoMgr();
    PedidoMGR& getPedidoMgr();
    OrdemServicoMGR& getOrdemServicoMgr();

    // Método para gerenciar o sistema com menu interativo
    void gerenciarSistema();
    void gerenciarClientes();   
    void gerenciarFornecedores();
    void gerenciarProdutos();
    void gerenciarMateriais();
    void gerenciarOrcamentos();
    void gerenciarPedidos();
    void gerenciarOrdensDeServico(); // Adicione esta linha
};

#endif // ADMIN_HPP

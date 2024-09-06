
#include "adm.hpp"
#include <iostream>
#include <vector> 
using std::vector;

Admin::Admin(const std::string& login, const std::string& senha) 
: login(login), senha(senha), clienteMgr(ClienteMGR::getInstance()), fornecedorMgr(FornecedorMGR::getInstance()), produtoMgr(ProdutoManager::getInstance()), materialMgr(MaterialMGR::getInstance()), orcamentoMgr(OrcamentoMgr::getInstance()), pedidoMgr(PedidoMGR::getInstance()), ordemServicoMgr(OrdemServicoMGR::getInstance()), mocker(Mocker::getInstance()) {}

bool Admin::autenticar(const std::string& login, const std::string& senha) {
    return this->login == login && this->senha == senha;
}


ClienteMGR& Admin::getClienteMgr() {
    return clienteMgr;
}

FornecedorMGR& Admin::getFornecedorMgr() {
    return fornecedorMgr;
}

ProdutoManager& Admin::getProdutoMgr() {
    return produtoMgr;
}

MaterialMGR& Admin::getMaterialMgr() {
    return materialMgr;
}

OrcamentoMgr& Admin::getOrcamentoMgr() {
    return orcamentoMgr;
}

PedidoMGR& Admin::getPedidoMgr() {
    return pedidoMgr;
}

OrdemServicoMGR& Admin::getOrdemServicoMgr() {
    return ordemServicoMgr;
}

Mocker& Admin::getMocker() {
    return mocker;
}

void Admin::gerenciarSistema() {
    int opcao;
    do {
        std::cout << "\n=== Menu de Gerenciamento ===\n";
        std::cout << "1. Gerenciar Clientes\n";
        std::cout << "2. Gerenciar Fornecedores\n";
        std::cout << "3. Gerenciar Produtos\n";
        std::cout << "4. Gerenciar Materiais\n";
        std::cout << "5. Gerenciar Orçamentos\n";
        std::cout << "6. Gerenciar Pedidos\n";
        std::cout << "7. Gerenciar Ordens de Serviço\n";
        std::cout << "8. Sair\n";
        std::cout << "9. Mockar Dados\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;
        
        switch(opcao) {
            case 1:
                gerenciarClientes();
                break;
            case 2:
                gerenciarFornecedores();
                break;
            case 3:
                gerenciarProdutos();
                break;
            case 4:
                gerenciarMateriais();
                break;
            case 5:
                gerenciarOrcamentos();
                break;
            case 6:
                gerenciarPedidos();
                break;
            case 7:
                gerenciarOrdensDeServico();
                break;
            case 8:
                std::cout << "Encerrando o sistema. Até mais!\n";
                break;
            case 9:
                getMocker().mockData();
                break;
            default:
                std::cout << "Opção inválida! Por favor, tente novamente.\n";
                break;
        }
    } while(opcao != 8);
}

void Admin::gerenciarClientes() {
    ClienteMGR& clienteMgr = ClienteMGR::getInstance();

    int subOpcao;
    std::cout << "\n-- Gerenciar Clientes --\n";
    std::cout << "1. Cadastrar Cliente\n";
    std::cout << "2. Listar Clientes\n";
    std::cout << "3. Atualizar Cliente\n";
    std::cout << "4. Deletar Cliente\n";
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        int id;
        std::string nome, cpf, email, telefone, endereco, cidade, estado, cep;
        std::cout << "Digite o ID do Cliente: ";
        std::cin >> id;
        std::cin.ignore(); // Limpar o buffer
        std::cout << "Digite o Nome: ";
        std::getline(std::cin, nome);
        std::cout << "Digite o CPF: ";
        std::getline(std::cin, cpf);
        std::cout << "Digite o Email: ";
        std::getline(std::cin, email);
        std::cout << "Digite o Telefone: ";
        std::getline(std::cin, telefone);
        std::cout << "Digite o Endereço: ";
        std::getline(std::cin, endereco);
        std::cout << "Digite a Cidade: ";
        std::getline(std::cin, cidade);
        std::cout << "Digite o Estado: ";
        std::getline(std::cin, estado);
        std::cout << "Digite o CEP: ";
        std::getline(std::cin, cep);

        Cliente novoCliente(id, nome, cpf, email, telefone, endereco, cidade, estado, cep);
        clienteMgr.cadastrarCliente(novoCliente);
        clienteMgr.listarCLientesDetalhados();
    }
    else if(subOpcao == 2) {
        clienteMgr.listarClientes();
    }
    else if(subOpcao == 3) {
        int id;
        std::cout << "Digite o ID do Cliente a ser atualizado: ";
        std::cin >> id;
        std::cin.ignore();
        
        std::string nome, cpf, email, telefone, endereco, cidade, estado, cep;
        std::cout << "Digite o Novo Nome: ";
        std::getline(std::cin, nome);
        std::cout << "Digite o Novo CPF: ";
        std::getline(std::cin, cpf);
        std::cout << "Digite o Novo Email: ";
        std::getline(std::cin, email);
        std::cout << "Digite o Novo Telefone: ";
        std::getline(std::cin, telefone);
        std::cout << "Digite o Novo Endereço: ";
        std::getline(std::cin, endereco);
        std::cout << "Digite a Nova Cidade: ";
        std::getline(std::cin, cidade);
        std::cout << "Digite o Novo Estado: ";
        std::getline(std::cin, estado);
        std::cout << "Digite o Novo CEP: ";
        std::getline(std::cin, cep);

        Cliente atualizado(id, nome, cpf, email, telefone, endereco, cidade, estado, cep);
        clienteMgr.atualizarCliente(atualizado); 
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID do Cliente a ser deletado: ";
        std::cin >> id;
        clienteMgr.deletarCliente(id); 
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

void Admin::gerenciarFornecedores() {
    FornecedorMGR& fornecedorMgr = FornecedorMGR::getInstance();
    int subOpcao;
    std::cout << "\n-- Gerenciar Fornecedores --\n";
    std::cout << "1. Cadastrar Fornecedor\n";
    std::cout << "2. Listar Fornecedores\n";
    std::cout << "3. Atualizar Fornecedor\n";
    std::cout << "4. Deletar Fornecedor\n";
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        int id;
        std::string nome, cnpj, email, telefone, endereco, cidade, estado, cep;
        std::cout << "Digite o ID do Fornecedor: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Digite o Nome: ";
        std::getline(std::cin, nome);
        std::cout << "Digite o CNPJ: ";
        std::getline(std::cin, cnpj);
        std::cout << "Digite o Email: ";
        std::getline(std::cin, email);
        std::cout << "Digite o Telefone: ";
        std::getline(std::cin, telefone);
        std::cout << "Digite o Endereço: ";
        std::getline(std::cin, endereco);   
        std::cout << "Digite a Cidade: ";
        std::getline(std::cin, cidade);
        std::cout << "Digite o Estado: ";
        std::getline(std::cin, estado);
        std::cout << "Digite o CEP: ";
        std::getline(std::cin, cep);

        Fornecedor novoFornecedor(id, nome, cnpj, email, telefone, endereco, cidade, estado, cep);
        fornecedorMgr.cadastrarFornecedor(novoFornecedor);  
        fornecedorMgr.listarFornecedoresDetalhados();
    }
    else if(subOpcao == 2) {
        fornecedorMgr.listarFornecedores();
    }
    else if(subOpcao == 3) {
        int id;
        std::cout << "Digite o id do Fornecedor a ser atualizado: ";
        std::cin >> id; 
        std::cin.ignore();
        std::string cnpj,nome, email, telefone, endereco, cidade, estado, cep;
        std::cout << "Digite o CNPJ: ";
        std::getline(std::cin, cnpj);
        std::cout << "Digite o Novo Nome: ";
        std::getline(std::cin, nome);
        std::cout << "Digite o Novo Email: ";
        std::getline(std::cin, email);
        std::cout << "Digite o Novo Telefone: ";
        std::getline(std::cin, telefone);
        std::cout << "Digite o Novo Endereço: ";
        std::getline(std::cin, endereco);
        std::cout << "Digite a Nova Cidade: ";
        std::getline(std::cin, cidade);
        std::cout << "Digite o Novo Estado: ";
        std::getline(std::cin, estado);
        std::cout << "Digite o Novo CEP: ";
        std::getline(std::cin, cep);

        Fornecedor atualizado(id, nome, cnpj, email, telefone, endereco, cidade, estado, cep);
        fornecedorMgr.atualizarFornecedor(atualizado); 
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID do Fornecedor a ser deletado: ";
        std::cin >> id;
        fornecedorMgr.deletarFornecedor(id);
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

void Admin::gerenciarProdutos() {
    ProdutoManager& produtoMgr = ProdutoManager::getInstance();
    int subOpcao;
    std::cout << "\n-- Gerenciar Produtos --\n";
    std::cout << "1. Cadastrar Produto\n";
    std::cout << "2. Listar Produtos\n";
    std::cout << "3. Atualizar Produto\n";
    std::cout << "4. Deletar Produto\n";
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        int id, quantidade;
        std::string descricao, servico, categoria, status;
        std::cout << "Digite o ID do Produto: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite a Quantidade: ";
        std::cin >> quantidade;
        std::cout << "Digite o Serviço: ";
        std::getline(std::cin, servico);
        std::cout << "Digite a Categoria: ";
        std::getline(std::cin, categoria);
        std::cout << "Digite o Status: ";
        std::getline(std::cin, status);

        Produto novoProduto(id, descricao, servico, quantidade, categoria, status);
        produtoMgr.adicionarProduto(novoProduto); 
        produtoMgr.listarProdutoDetalhado(id);
    }
    else if(subOpcao == 2) {
        produtoMgr.listarTodosProdutos(); 
    }
    else if(subOpcao == 3) {
        int id, quantidade;
        std::cout << "Digite o ID do Produto a ser atualizado: ";
        std::cin >> id;
        std::cin.ignore();

        std::string descricao, servico, categoria, status;
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite a Quantidade: ";
        std::cin >> quantidade;
        std::cout << "Digite o Serviço: ";
        std::getline(std::cin, servico);
        std::cout << "Digite a Categoria: ";
        std::getline(std::cin, categoria);
        std::cout << "Digite o Status: ";
        std::getline(std::cin, status);

        Produto atualizado(id, descricao, servico, quantidade, categoria, status);
        produtoMgr.atualizarProduto(atualizado);
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID do Produto a ser deletado: ";
        std::cin >> id;
        produtoMgr.removerProduto(id);
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

void Admin::gerenciarMateriais() {
    MaterialMGR& materialMgr = MaterialMGR::getInstance();
    int subOpcao;
    std::cout << "\n-- Gerenciar Materiais --\n";
    std::cout << "1. Cadastrar Material\n";
    std::cout << "2. Listar Materiais\n";
    std::cout << "3. Atualizar Material\n";
    std::cout << "4. Deletar Material\n";
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        int id, quantidade, idFornecedor, idProdutoDestino;
        std::string descricao;
        Fornecedor fornecedor;
        Produto produtoDestino;
        std::cout << "Digite o ID do Material: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite o id doFornecedor: ";
        std::cin >> idFornecedor;
        std::cout << "Digite o id do Produto Destino: ";
        std::cin >> idProdutoDestino;

        Material novoMaterial(id, descricao, fornecedorMgr.buscarFornecedor(idFornecedor), produtoMgr.buscarProduto(idProdutoDestino));
        materialMgr.adicionarMaterial(novoMaterial); 
        materialMgr.listarMateriais();
    }
    else if(subOpcao == 2) {
        materialMgr.listarMateriais();
    }
    else if(subOpcao == 3) {
        int id, quantidade, idFornecedor, idProdutoDestino;
        std::cout << "Digite o ID do Material a ser atualizado: ";
        std::cin >> id;
        std::cin.ignore();

        std::string descricao;
        
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite o id doFornecedor: ";
        std::cin >> idFornecedor;
        std::cout << "Digite o id do Produto Destino: ";
        std::cin >> idProdutoDestino;

        Material atualizado(id, descricao, fornecedorMgr.buscarFornecedor(idFornecedor), produtoMgr.buscarProduto(idProdutoDestino));
        materialMgr.atualizarMaterial(id, atualizado);
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID do Material a ser deletado: ";
        std::cin >> id;
        materialMgr.removerMaterial(id);
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

void Admin::gerenciarOrcamentos() {
    OrcamentoMgr& orcamentoMgr = OrcamentoMgr::getInstance();
    ProdutoManager& produtoMgr = ProdutoManager::getInstance();
    int subOpcao;
    std::cout << "\n-- Gerenciar Orçamentos --\n";
    std::cout << "1. Cadastrar Orçamento\n";
    std::cout << "2. Listar Orçamentos\n";
    std::cout << "3. Atualizar Orçamento\n";
    std::cout << "4. Deletar Orçamento\n";
    std::cout << "5. Listar Orçamentos Detalhados\n";
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        int id, quantidade;
        std::string descricao, servico, dataVencimento;
        double valor;
        std::cout << "Digite o ID do Orçamento: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite o Serviço: ";
        std::getline(std::cin, servico);
        std::cout << "Digite o Valor: ";
        std::cin >> valor;
        std::cout << "Digite a Data de Vencimento: ";
        std::getline(std::cin, dataVencimento);
        std::cout << "Insira os produtos do orçamento: " << std::endl;
        std::vector<Produto> produtos;
        while(true) {
            int id, quantidadeProduto;
            std::string descricao, servicoProduto, categoria, status;
            std::cout << "Digite o ID do Produto: ";
            std::cin >> id;
            std::cin.ignore();
            std::cout << "Digite a Descrição: ";
            std::getline(std::cin, descricao);
            std::cout << "Digite o Serviço: ";
            std::getline(std::cin, servicoProduto);
            std::cout << "Digite a Quantidade: ";
            std::cin >> quantidadeProduto;
            std::cout << "Digite a Categoria: ";
            std::getline(std::cin, categoria);
            std::cout << "Digite o Status: ";
            std::getline(std::cin, status);
            
             

            Produto produtoNovo(id, descricao, servicoProduto, quantidadeProduto, categoria, status);
            produtos.push_back(produtoNovo);
           std::cout << "Produto adicionado com sucesso!" << std::endl;
           std::cout << "Deseja adicionar mais produtos? (1 - Sim / 0 - Não): ";
           int opcao;
           std::cin >> opcao;
           if(opcao == 0) {
            break;
           }
        }
         Orcamento novoOrcamento(id, descricao, servico, quantidade, dataVencimento, produtos, valor);
         orcamentoMgr.adicionarOrcamento(novoOrcamento);
         orcamentoMgr.listarOrcamentos();
         std::cout << "Orcamento cadastrado com sucesso!" << std::endl;
    }
    else if(subOpcao == 2) {
        orcamentoMgr.listarOrcamentos();
    }
    else if(subOpcao == 3) {
        int id, quantidade;
        std::string descricao, servico, dataVencimento;
        double valor;
        std::cout << "Digite o ID do Orçamento a ser atualizado: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite o Serviço: ";
        std::getline(std::cin, servico);
        std::cout << "Digite o Valor: ";
        std::cin >> valor;
        std::cout << "Digite a Data de Vencimento: ";
        std::getline(std::cin, dataVencimento);
        std::cout << "Digite a quantidade de produtos: ";
        std::cin >> quantidade;

        std::vector<Produto> produtos;

        Orcamento atualizado(id, descricao, servico, quantidade, dataVencimento, produtos, valor);
        orcamentoMgr.atualizarOrcamento(id, atualizado);
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID do Orçamento a ser deletado: ";
        std::cin >> id;
        orcamentoMgr.removerOrcamento(id);
    } 
    else if(subOpcao == 5){
        int idImpresso;
        std::cout << "Qual o id do orcamento a ser impresso?";
        std::cin >> idImpresso;
        Orcamento  orcamentoImprimido = orcamentoMgr.buscarOrcamento(idImpresso);
        orcamentoMgr.imprimirOrcamentoDetalhado(orcamentoImprimido);
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

void Admin::gerenciarPedidos() {
    PedidoMGR& pedidoMgr = PedidoMGR::getInstance();
    int subOpcao;
    std::cout << "\n-- Gerenciar Pedidos --\n";
    std::cout << "1. Cadastrar Pedido\n";
    std::cout << "2. Listar Pedidos\n";
    std::cout << "3. Atualizar Pedido\n";
    std::cout << "4. Deletar Pedido\n";
    std::cout << "5. Listar Pedidos Detalhados\n";  
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        std::cout << "Ultimos orçamentos cadastrados: " << std::endl;
        orcamentoMgr.listarOrcamentos();
        std::cout << "Digite o ID do Orçamento: ";
        int idOrcamento;
        std::cin >> idOrcamento;
        std::cin.ignore();
        Orcamento orcamento = orcamentoMgr.buscarOrcamento(idOrcamento);
        int numPedido;
        std::string  status, enderecoServico, materiais, cliente;
        
        std::cout << "Digite o Numero do Pedido: ";
        std::cin >> numPedido;
        std::cin.ignore();
        std::cout << "Digite o Cliente: ";
        std::getline(std::cin, cliente);
        std::cout << "Digite os Materiais: ";
        std::getline(std::cin, materiais);
        std::cout << "Digite o Status: ";
        std::getline(std::cin, status);
        std::cout << "Digite o Endereco do Serviço: ";
        std::getline(std::cin, enderecoServico);    
       

        Pedido novoPedido(orcamento, numPedido, cliente, materiais, status, enderecoServico);
        pedidoMgr.criarPedido(novoPedido);
        pedidoMgr.listarPedidos();
    }
    else if(subOpcao == 2) {
        pedidoMgr.listarPedidos();
    }
    else if(subOpcao == 3) {
        int numPedido;
        std::string  status, enderecoServico, materiais, cliente;
        Orcamento orcamento;
        std::cout << "Digite o Numero do Pedido: ";
        std::cin >> numPedido;
        std::cin.ignore();
        std::cout << "Digite o Cliente: ";
        std::getline(std::cin, cliente);
        std::cout << "Digite os Materiais: ";
        std::getline(std::cin, materiais);
        std::cout << "Digite o Status: ";
        std::getline(std::cin, status);
        std::cout << "Digite o Endereco do Serviço: ";
        std::getline(std::cin, enderecoServico); 

        Pedido atualizado(orcamento, numPedido, cliente, materiais, status, enderecoServico);
        pedidoMgr.atualizarPedido(atualizado);
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID do Pedido a ser deletado: ";
        std::cin >> id;
        pedidoMgr.deletarPedido(id);
    }
    else if(subOpcao == 5){
        int idImpresso;
        std::cout << "Qual o id do pedido a ser impresso?";
        std::cin >> idImpresso;
        pedidoMgr.exibirInformacoesPedido(idImpresso);
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

void Admin::gerenciarOrdensDeServico() {
    OrdemServicoMGR& osMgr = OrdemServicoMGR::getInstance();
    int subOpcao;
    std::cout << "\n-- Gerenciar Ordens de Serviço --\n";
    std::cout << "1. Cadastrar Ordem de Serviço\n";
    std::cout << "2. Listar Ordens de Serviço\n";
    std::cout << "3. Atualizar Ordem de Serviço\n";
    std::cout << "4. Deletar Ordem de Serviço\n";
    std::cout << "5. Listar Ordem de Serviço Detalhada\n";
    std::cout << "Escolha uma sub-opção: ";
    std::cin >> subOpcao;

    if(subOpcao == 1) {
        int idProduto, idPedido;
        std::string descricao;
        std::vector<Material> materiais;

        std::cout << "Digite o ID do Pedido: ";
        std::cin >> idPedido;
        std::cin.ignore();
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite o Produto: ";
        std::cin >> idProduto;
        
        Pedido pedido = pedidoMgr.buscarPedidoPorNumero(idPedido);
        Produto produto = produtoMgr.buscarProduto(idProduto);

        // Chama o método para buscar materiais por produto
        MaterialDAO::getInstance().buscarMateriaisPorProduto(idProduto, materiais);

        OrdemDeServico novaOrdem(pedido, descricao, idPedido, produto, materiais);
        osMgr.criarOrdemDeServico(novaOrdem);
        osMgr.listarOrdensDeServico();
    }
    else if(subOpcao == 2) {
        osMgr.listarOrdensDeServico();
    }
    else if(subOpcao == 3) {
        int idProduto, idPedido;
        std::string descricao;
        std::vector<Material> materiais;

        std::cout << "Digite o ID do Pedido: ";
        std::cin >> idPedido;
        std::cin.ignore();
        std::cout << "Digite a Descrição: ";
        std::getline(std::cin, descricao);
        std::cout << "Digite o Produto: ";
        std::cin >> idProduto;
        
        Pedido pedido = pedidoMgr.buscarPedidoPorNumero(idPedido);
        Produto produto = produtoMgr.buscarProduto(idProduto);

        // Chama o método para buscar materiais por produto
        MaterialDAO::getInstance().buscarMateriaisPorProduto(idProduto, materiais);

        OrdemDeServico atualizada(pedido, descricao, idPedido, produto, materiais);
        osMgr.atualizarOrdemDeServico(atualizada);
    }
    else if(subOpcao == 4) {
        int id;
        std::cout << "Digite o ID da Ordem de Serviço a ser deletada: ";
        std::cin >> id;
        osMgr.deletarOrdemDeServico(id);
    }
    else if(subOpcao == 5){
        int idImpresso;
        std::cout << "Qual o id do pedido da ordem de serviço a ser impresso?";
        std::cin >> idImpresso;
        OrdemDeServico ordemImpresso = osMgr.buscarOrdemDeServicoPorIddoPedido(idImpresso);
        osMgr.exibirInformacoesOrdemDeServico(ordemImpresso);
    }
    else {
        std::cout << "Opção inválida!\n";
    }
}

        

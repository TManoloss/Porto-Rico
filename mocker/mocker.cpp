    #include "mocker.hpp"

    void Mocker::mockData() {
        //CRIAR PRODUTOS    
        ProdutoManager& produtoMgr = ProdutoManager::getInstance();
        Produto prod1(1, "Sofá", "Troca de espuma e tecido", 10, "Sofá", "Disponível");
        Produto prod2(2, "Cadeira", "Troca de espuma", 5, "Cadeira", "Disponível");
        Produto prod3(3, "Mesa", "Troca de madeira", 2, "Mesa", "Disponível");
        
        produtoMgr.adicionarProduto(prod1); // Adicionando produto ao DAO
        produtoMgr.adicionarProduto(prod2); // Adicionando produto ao DAO
        produtoMgr.adicionarProduto(prod3); // Adicionando produto ao DAO
        
        // Verifique se os produtos foram adicionados
        std::cout << "Produtos adicionados: " << produtoMgr.listarTodosProdutos().size() << std::endl;

        //CRIAR FORNECEDORES
        FornecedorMGR& fornecedorMgr = FornecedorMGR::getInstance();
        Fornecedor forn1(1,"Eric Seles", "1234567890", "eseles@gmail.com", "44 99999999", "Rua 1", "Sao Paulo", "SP", "12345678");  
        std::vector<Fornecedor> fornecedores;
        fornecedores.push_back(forn1);
        
        //CRIAR MATERIAIS
        Fornecedor fornMat1 = fornecedorMgr.buscarFornecedor(1);
        Produto prodMat1 = produtoMgr.buscarProduto(1);
        Material mat1(1, "Espuma", fornMat1, prodMat1);
        std::vector<Material> materiais;
        materiais.push_back(mat1);
        Material mat2(2, "Tecido", fornMat1, prodMat1);
        materiais.push_back(mat2);
        Produto prodMat2 = produtoMgr.buscarProduto(2);
        Material mat3(3, "Madeira", fornMat1, prodMat2);
        materiais.push_back(mat3);
        materialMgr.adicionarMaterial(mat1);
        materialMgr.adicionarMaterial(mat2);
        materialMgr.adicionarMaterial(mat3);

        //CRIAR CLIENTES
        ClienteMGR& clienteMgr = ClienteMGR::getInstance();
        Cliente cli1(1,"Manel", "1234567890", "Manel@gmail.com", "44 9999", "Rua 1", "Sao Paulo", "SP", "12345678");
        Cliente cli2(2,"Rosana", "1234567890", "rosana@gmail.com", "44 9999", "Rua 2", "Sao Paulo", "SP", "12345678");
        Cliente cli3(3,"Sabrina", "1234567890", "sabrina@gmail.com", "44 9999", "Rua 3", "Sao Paulo", "SP", "12345678");
        std::vector<Cliente> clientes;
        clientes.push_back(cli1);
        clientes.push_back(cli2);
        clientes.push_back(cli3);
        clienteMgr.cadastrarCliente(cli1);
        clienteMgr.cadastrarCliente(cli2);
        clienteMgr.cadastrarCliente(cli3);
        // clienteMgr.listarCLientesDetalhados();
        
        //CRIAR ORÇAMENTOS
        OrcamentoMgr& orcamentoMgr = OrcamentoMgr::getInstance();
        std::vector<Produto> produtos;
        produtos.push_back(prod1);
        produtos.push_back(prod2);
        produtos.push_back(prod3);
        Orcamento orc1(1, "Reforma de estofado", "Troca de espuma e tecido", 2, "2024-01-01", produtos, 1000.00);
        Orcamento orc2(2, "Troca de tecido", "Troca de tecido", 1, "2024-01-02", produtos, 500.00);
        Orcamento orc3(3, "Troca de espuma", "Troca de espuma", 3, "2024-01-03", produtos, 1500.00);
        std::vector<Orcamento> orcamentos;
        orcamentos.push_back(orc1);
        orcamentos.push_back(orc2);
        orcamentos.push_back(orc3);
        orcamentoMgr.adicionarOrcamento(orc1);
        orcamentoMgr.adicionarOrcamento(orc2);
        orcamentoMgr.adicionarOrcamento(orc3);
        // orcamentoMgr.imprimirOrcamentoDetalhado(orc1);

        //CRIAR PEDIDOS
        PedidoMGR& pedidoMgr = PedidoMGR::getInstance();
        int idOrc = 1;
        Orcamento pediOrc1 = orcamentoMgr.buscarOrcamento(idOrc); 
        Pedido ped1(pediOrc1, 1, "Manoel", "Tecido suede", "Em andamento", "Rua 1");
        pedidoMgr.criarPedido(ped1);
        // pedidoMgr.exibirInformacoesPedido(idOrc);

        //CRIAR ORDENS DE SERVIÇO
        OrdemServicoMGR& ordemServicoMgr = OrdemServicoMGR::getInstance();
        Material matOS1 = materialMgr.buscarMaterial(1);
        Material matOS2 = materialMgr.buscarMaterial(2);
        
        std::vector<Material> materiaisOS1;
        materiaisOS1.push_back(matOS1);
        materiaisOS1.push_back(matOS2);
        Produto prodOS1 = produtoMgr.buscarProduto(1);
        Pedido pediOs1 = pedidoMgr.buscarPedidoPorNumero(1);
        OrdemDeServico os1(pediOs1, "Troca de espuma e tecido", 1, prodOS1, materiaisOS1);
        ordemServicoMgr.criarOrdemDeServico(os1);
        // ordemServicoMgr.exibirInformacoesOrdemDeServico(os1);
    }
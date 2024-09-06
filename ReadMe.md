# Sistema de Gerenciamento

Este é um sistema de gerenciamento que permite a administração de produtos, fornecedores, clientes, orçamentos, pedidos e ordens de serviço. O sistema é modular e utiliza o padrão de projeto Singleton para gerenciar as instâncias de cada módulo.

## Estrutura do Projeto

O projeto é dividido em várias pastas, cada uma contendo classes e gerenciadores para diferentes entidades:

- **adm/**: Contém a classe `Admin` que gerencia as operações administrativas.
- **cliente/**: Contém as classes `Cliente`, `ClienteDAO` e `ClienteMGR` para gerenciar clientes.
- **fornecedor/**: Contém as classes `Fornecedor`, `FornecedorDAO` e `FornecedorMGR` para gerenciar fornecedores.
- **produto/**: Contém as classes `Produto`, `ProdutoDAO` e `ProdutoManager` para gerenciar produtos.
- **material/**: Contém as classes `Material`, `MaterialDAO` e `MaterialMGR` para gerenciar materiais.
- **orcamento/**: Contém as classes `Orcamento`, `OrcamentoDAO` e `OrcamentoMgr` para gerenciar orçamentos.
- **pedido/**: Contém as classes `Pedido`, `PedidoDAO` e `PedidoMGR` para gerenciar pedidos.
- **ordemServico/**: Contém as classes `OrdemDeServico`, `OrdemServicoDAO` e `OrdemServicoMGR` para gerenciar ordens de serviço.
- **mocker/**: Contém a classe `Mocker` que gera dados fictícios para testes.

## Funcionalidades

O sistema permite as seguintes operações:

1. **Gerenciar Clientes**: Cadastrar, atualizar, deletar e listar clientes.
2. **Gerenciar Fornecedores**: Cadastrar, atualizar, deletar e listar fornecedores.
3. **Gerenciar Produtos**: Cadastrar, atualizar, deletar e listar produtos.
4. **Gerenciar Materiais**: Cadastrar, atualizar, deletar e listar materiais.
5. **Gerenciar Orçamentos**: Cadastrar, atualizar, deletar e listar orçamentos.
6. **Gerenciar Pedidos**: Cadastrar, atualizar, deletar e listar pedidos.
7. **Gerenciar Ordens de Serviço**: Cadastrar, atualizar, deletar e listar ordens de serviço.

## Como Usar

1. **Compilação**: Compile o projeto utilizando o seguinte comando:
   ```bash
   g++ -std=c++11 main.cpp cliente/*.cpp fornecedor/*.cpp produto/*.cpp material/*.cpp orcamento/*.cpp pedido/*.cpp ordemServico/*.cpp adm/*.cpp mocker/*.cpp -o sistema && ./sistema
   ```
2. **Execução**: Execute o arquivo gerado para iniciar o sistema.
3. **Interação**: Siga as instruções no console para navegar pelas opções do sistema.

## Dependências

- C++11 ou superior
- Biblioteca padrão do C++

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir um pull request ou relatar problemas.

## Licença

Este projeto está licenciado sob a MIT License.
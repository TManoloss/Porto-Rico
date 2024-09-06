#include "materialDAO.hpp"
#include <iostream>
#include <algorithm>

MaterialDAO& MaterialDAO::getInstance() {
    static MaterialDAO instance;  // Cria a instância uma única vez
    return instance;  // Retorna a referência à instância
}

void MaterialDAO::adicionarMaterial(const Material& material) {
    this->materiais.push_back(material);
}

void MaterialDAO::removerMaterial(int id) {
    this->materiais.erase(std::remove_if(this->materiais.begin(), this->materiais.end(), [id](const Material& material){
        return material.getId() == id;
    }), this->materiais.end()); 
}

Material MaterialDAO::buscarMaterial(int id) const {
    for(const Material& material : this->materiais){
        if(material.getId() == id){
            return material;
        }
    }
    return Material();
}

void MaterialDAO::atualizarMaterial(int id, const Material& novoMaterial) {
    for(Material& material : this->materiais){
        if(material.getId() == id){
            material = novoMaterial;
            break;
        }
    }
}

void MaterialDAO::imprimirMaterialDetalhado(const Material& material) const {
    std::cout << "\n----------------------------------------\n";
    std::cout << "Detalhes do Material:" << std::endl;
    std::cout << "ID: " << material.getId() << std::endl;
    std::cout << "Descrição: " << material.getDescricao() << std::endl;
    std::cout << "Fornecedor: " << material.getFornecedor().getNome() << std::endl;
    std::cout << "\nMaterial listado com sucesso\n";
}

std::vector<Material> MaterialDAO::listarMateriais() const {
    return this->materiais;
}

void MaterialDAO::buscarMateriaisPorProduto(int produtoId, std::vector<Material>& materiaisEncontrados) const {
    for(const Material& material : this->materiais){
        if(material.getProdutoDestino().getId() == produtoId){  // Corrigido para usar getProdutoDestino()
            materiaisEncontrados.push_back(material);
        }
    }
}



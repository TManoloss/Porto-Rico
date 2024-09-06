#include "materialMGR.hpp"



void MaterialMGR::adicionarMaterial(const Material& material){
    this->materialDAO.adicionarMaterial(material);
}

void MaterialMGR::removerMaterial(int id){
    this->materialDAO.removerMaterial(id);
}

Material MaterialMGR::buscarMaterial(int id) const{
    return this->materialDAO.buscarMaterial(id);
}

void MaterialMGR::atualizarMaterial(int id, const Material& material){
    this->materialDAO.atualizarMaterial(id, material);
}

void MaterialMGR::imprimirMaterialDetalhado(const Material& material){
    this->materialDAO.imprimirMaterialDetalhado(material);
}

vector<Material> MaterialMGR::listarMateriais() const{
    return this->materialDAO.listarMateriais();
}   
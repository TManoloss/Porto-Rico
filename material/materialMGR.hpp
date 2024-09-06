#ifndef MATERIAL_MGR_HPP
#define MATERIAL_MGR_HPP

#include "material.hpp"
#include "materialDAO.hpp"

class MaterialMGR{
    private:
        MaterialDAO materialDAO;
        MaterialMGR(): materialDAO(MaterialDAO::getInstance()){}
    public:
    static MaterialMGR& getInstance(){
        static MaterialMGR instance;
        return instance;
    }   
        void adicionarMaterial(const Material& material);
        void removerMaterial(int id);
        Material buscarMaterial(int id) const;
        void atualizarMaterial(int id, const Material& material);
        void imprimirMaterialDetalhado(const Material& material);
        vector<Material> listarMateriais() const;
};
#endif
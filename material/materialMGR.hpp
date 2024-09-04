#ifndef MATERIAL_MGR_HPP
#define MATERIAL_MGR_HPP

#include "material.hpp"
#include "materialDAO.hpp"

class MaterialMGR{
    private:
        MaterialDAO materialDAO;
    public:
        MaterialMGR();
        void adicionarMaterial(const Material& material);
        void removerMaterial(int id);
        Material buscarMaterial(int id) const;
        void atualizarMaterial(int id, const Material& material);
        void imprimirMaterialDetalhado(const Material& material);
        vector<Material> listarMateriais() const;
};
#endif
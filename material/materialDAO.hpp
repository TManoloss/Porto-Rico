#ifndef MATERIAL_DAO_HPP
#define MATERIAL_DAO_HPP

#include "material.hpp"
#include <vector>
using std::vector;

class MaterialDAO{
    private:
        vector<Material> materiais;
    public:
        void adicionarMaterial(const Material& material);
        void removerMaterial(int id);
        Material buscarMaterial(int id) const;
        void atualizarMaterial(int id, const Material& material);
        void imprimirMaterialDetalhado(const Material& material) const;
        std::vector<Material> listarMateriais() const;
};          
#endif
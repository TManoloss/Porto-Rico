#include <iostream>
#include "adm/adm.hpp"

int main() {

    Admin admin("adm", "adm");

    std::string login, senha;
    std::cout << "Login: ";
    std::cin >> login;
    std::cout << "Senha: ";
    std::cin >> senha;

    if (admin.autenticar(login, senha)) {
        std::cout << "Bem-vindo, Admin!\n";
        
        
        admin.gerenciarSistema();
        // ...
        
    } else {
        std::cout << "Login ou senha incorretos!\n";
    }

    return 0;
}

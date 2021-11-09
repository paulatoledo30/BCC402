#include <iostream>
#include <estoque/estoque.h>

using namespace std;

int main() {
    std::vector<struct produto> listaProdutos;
    while(true){
        ACOES escolha = screenMenu();
        switch (escolha) {
            case INSERIR_PRODUTO:
                addProdutos(listaProdutos);
                break;
            case EXIBIR_PRODUTOS:
                exibirProdutos(listaProdutos);
                break;
            case SAIR:
                return 0;
                break;
            default:
                std::cout << "Opção invalida" << std::endl;
                break;
        }
    }
    return 0;
}
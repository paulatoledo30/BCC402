#include <iostream>
#include <estoque/estoque.h>

using namespace std;

Estoque createEstoque(){

}

int main() {
    std::queue<Produto> listaProdutos;
    Estoque estoque;
    while(true){
        ACOES escolha = screenMenu();
        switch (escolha) {
            case INSERIR_PRODUTO:
                estoque.addProdutos(listaProdutos);
                break;
            case EXIBIR_PRODUTOS:
                estoque.exibirProdutos(listaProdutos);
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
#include <iostream>
#include <estoque/estoque.h>

using namespace std;

Estoque createEstoque(){
    Estoque* estoque = new Estoque();
    estoque->addItemEstoque(10, 12.2, "Fornecedor teste", "Produto Teste", 25, 12,2021, 25);
    estoque->exibeItensEstoque(*estoque);
    estoque->concorrents(estoque->getItens());
    return *estoque;
}

int main() {
    Estoque estoque = createEstoque();
    return 0;
}
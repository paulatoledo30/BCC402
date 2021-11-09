#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <string>
#include <vector>
#include <ctime>

enum ACOES {
    INSERIR_PRODUTO, EXIBIR_PRODUTOS, SAIR
};

struct produto{
    int codigo;
    double preco;
    std::string fornecedor;
    std::string descricao;
};

ACOES screenMenu();
void exibirProdutos(std::vector<struct produto> &lista);
void addProdutos(std::vector<struct produto> &lista);

#endif //ESTOQUE_H
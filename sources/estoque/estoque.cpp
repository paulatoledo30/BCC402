#include "estoque.h"
#include <iostream>

using namespace std;

ACOES screenMenu(){
    cout << "Escolha o que deseja realizar: " << endl;
    cout << INSERIR_PRODUTO << " - Inserir um compromisso " << endl;
    cout << EXIBIR_PRODUTOS << " - Exibir todos os compromissos " << endl;
    cout << SAIR << " - Sair do programa " << endl;

    int escolha = 0;
    cin >> escolha;

    return (ACOES) escolha;
}

void addProdutos (vector<struct produto> &lista){
    struct produto newProduto;

    cout << "Informe o código: " << endl;
    cin >> newProduto.codigo;

    cout << "Informe o preço: " << endl;
    cin >> newProduto.preco;

    cin.ignore();
    cout << "Informe o fornecedor: " << endl;
    getline(cin, newProduto.descricao);

    cin.ignore();
    cout << "Informe a descrição: " << endl;
    getline(cin, newProduto.descricao);

    lista.push_back(newProduto);
}

void exibirProdutos(vector<struct produto> &lista){
    for (struct produto i: lista){
        cout << i.codigo << " - " << i.preco << " - " << i.fornecedor << " - " << i.descricao << endl;
    }
}

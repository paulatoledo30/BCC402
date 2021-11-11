#include "estoque.h"
#include <iostream>

using namespace std;

Estoque::Estoque() {}

Estoque::Estoque(int codigo, double preco, const string &fornecedor, const string &descricao) : codigo(codigo), preco(preco), fornecedor(fornecedor),
                                                                     descricao(descricao) {}
//GET
int Estoque::getCodigo() const {
    return codigo;
}

double Estoque::getPreco() const {
    return preco;
}

const string &Estoque::getFornecedor() const {
    return fornecedor;
}

const string &Estoque::getDescricao() const {
    return descricao;
}

//SET
void Estoque::setCodigo(int codigo) {
    Estoque::codigo = codigo;
}

void Estoque::setPreco(double preco) {
    Estoque::preco = preco;
}

void Estoque::setFornecedor(const string &fornecedor) {
    Estoque::fornecedor = fornecedor;
}

void Estoque::setDescricao(const string &descricao) {
    Estoque::descricao = descricao;
}

ACOES screenMenu(){
    cout << "Escolha o que deseja realizar: " << endl;
    cout << INSERIR_PRODUTO << " - Inserir um compromisso " << endl;
    cout << EXIBIR_PRODUTOS << " - Exibir todos os compromissos " << endl;
    cout << SAIR << " - Sair do programa " << endl;

    int escolha = 0;
    cin >> escolha;

    return (ACOES) escolha;
}

void addProdutos (std::queue<Estoque> &lista){
    int codigo;
    double preco;
    string descricao, fornecedor;

    cout << "Informe o código: " << endl;
    cin >> codigo;

    cout << "Informe o preço: " << endl;
    cin >> preco;

    cin.ignore();
    cout << "Informe o fornecedor: " << endl;
    getline(cin, fornecedor);

    cin.ignore();
    cout << "Informe a descrição: " << endl;
    getline(cin, descricao);

    Estoque newEstoque(codigo,preco,fornecedor,descricao);
    lista.push(newProduto);
}

void exibirProdutos(std::queue<Estoque> &lista){
if (!lista.empty()) {
        cout << "Estoque: " << endl;
        int cont = 1;
        Estoque produto;
        cout <<"Result: " << lista.empty() << endl;
        while (!lista.empty()) {
            produto = lista.front();
            cout << cont << endl;
            cout << "Código: " << produto.getCodigo() << endl;
            cout << "Preço: " << produto.getPreco() << endl;
            cout << "Fornecedor: " << produto.getFornecedor() << endl;
            cout << "Descrição: " << produto.getDescricao() << endl;
            cout << "-------------------------------------------------" <<endl;
            cont++;
        }
    }else {
        cout << "Nenhum produto encontrado ou cadastrado " << endl;
    }
}

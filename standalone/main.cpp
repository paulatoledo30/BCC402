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

Estoque createEstoqueInterface(int codigo, double preco, const string &fornecedor, const string &descricao, int dia, int mes, int ano, int duracao){
    estoque->addItemEstoque(codigo, preco, fornecedor, descricao, dia, mes, ano, duracao);
    return *estoque;
}

void exibeItens(Estoque estoque){
    estoque->exibeItensEstoque(*estoque);
}

int main() {
    int codigo;
    double preco;
    const string fornecedor;
    const string descricao;
    int dia;
    int mes;
    int ano;
    int duracao;
    int escolha = 1;

    Estoque* estoque = new Estoque();

    cout << "Escolha o que deseja realizar: " << endl;
    cout << " 1 - Inserir um produto " << endl;
    cout << " 2 - Exibir todos os produtos " << endl;
    cout << " 0 - Sair do programa " << endl;

    cin >> escolha;

    while(escolha != 0){
        switch (escolha) {
            case 1:
                cout << "Digite o código do produto: " << endl;
                cin >> codigo;
                cout << "Digite o preço do produto:  " << endl;
                cin >> preco;
                cout << "Digite o fornecedor do produto:  " << endl;
                cin >> fornecedor;
                cout << "Digite a descrição do produto: " << endl;
                cin >> descricao;
                cout << "Digite o dia de vencimento do produto:  " << endl;
                cin >> dia;
                cout << "Digite o mês de vencimento do produto:  " << endl;
                cin >> mes;
                cout << "Digite a ano de vencimento do produto: " << endl;
                cin >> ano;
                cout << "Digite a duração do produto: " << endl;
                cin >> duracao;
                estoque = createEstoqueInterface(codigo, preco, fornecedor, descricao, dia, mes, ano, duracao);
                break;
            case 2:
                exibeItens(*estoque);
                break;
            case 0:
                return 0;
                break;
            default:
                std::cout << "Opção invalida" << std::endl;
                break;
        }
    }
    return 0;
}
#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <string>
#include <vector>
#include <queue>

template <class Type, class Container = std::vector <Type>>
class queue;

enum ACOES {
    INSERIR_PRODUTO, EXIBIR_PRODUTOS, SAIR
};

class Estoque{
    private:
        int codigo;
        double preco;
        std::string fornecedor;
        std::string descricao;

    public:
        //CONSTRUTORES
        Estoque();
        Estoque(int codigo, double preco, const string &fornecedor, const string &descricao);

        //GET
        int Estoque::getCodigo();
        double Estoque::getPreco();
        const string &Estoque::getFornecedor();
        const string &Estoque::getDescricao();

        //SET
        void Estoque::setCodigo(int codigo);
        void Estoque::setPreco(double preco);
        void Estoque::setFornecedor(const string &fornecedor);
        void Estoque::setDescricao(const string &descricao);

        //FUNÇÕES
        ACOES screenMenu();
        void exibirProdutos(std::queue<class Estoque> &lista);
        void addProdutos(std::queue<class Estoque> &lista);

        struct produto{
            int codigo = 0;
            double preco = 0;
            std::string fornecedor;
            std::string descricao;
        }
}



#endif //ESTOQUE_H
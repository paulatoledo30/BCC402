#ifndef ESTOQUEPROJECT_ITEM_HPP
#define ESTOQUEPROJECT_ITEM_HPP

#include <string>

class Item{
private:
    int codigo;
    double preco;
    std::string fornecedor;
    std::string descricao;
    int dia;
    int mes;
    int ano;
    int duracao;

public:
    //GET
    int getCodigo();
    double getPreco();
    const std::string getFornecedor();
    const std::string getDescricao();
    int getDia() ;
    int getMes() ;
    int getAno() ;
    int getDuracao() ;

    //SET
    void setCodigo(int codigo);
    void setPreco(double preco);
    void setFornecedor( std::string fornecedor);
    void setDescricao( std::string descricao);
    void setDia( int dia );
    void setMes( int mes );
    void setAno( int ano );
    void setDuracao( int duracao );

    Item( int codigo, double preco,  std::string fornecedor,  std::string descricao, int dia, int mes, int ano, int duracao);
    Item();
};
#endif //ESTOQUEPROJECT_ITEM_HPP

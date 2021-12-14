#ifndef ITEM_H
#define ITEM_H


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
    const std::string &getFornecedor();
    const std::string &getDescricao();
    int getDia() const;
    int getMes() const;
    int getAno() const;
    int getDuracao() const;

    //SET
    void setCodigo(int codigo);
    void setPreco(double preco);
    void setFornecedor(const std::string &fornecedor);
    void setDescricao(const std::string &descricao);
    void setDia( int dia );
    void setMes( int mes );
    void setAno( int ano );
    void setDuracao( int duracao );

    Item( int codigo, double preco,const std::string &fornecedor,const std::string &descricao, int dia, int mes, int ano, int duracao);
    Item();
}

#endif
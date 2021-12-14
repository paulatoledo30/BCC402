#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <string>
#include <vector>
#include <queue>
#include <ctime>
#include <user/user.h>
#include <item/item.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <thread>

template <class Type, class Container = std::vector <Type>>
class queue;

enum ACOES {
    INSERIR_PRODUTO, EXIBIR_PRODUTOS, SAIR
};

class Estoque{
private:
    std::vector <Item> itens;

public:
    //CONSTRUTORES
    Estoque();
    Estoque(int codigo, double preco, const string &fornecedor, const string &descricao, int dia, int mes, int ano, int duracao);

    //FUNÇÕES
    void exibeItensEstoque(Estoque);
    void addItemEstoque ( int , double , const std::string &,const std::string &, int , int , int);
    void addItem (Item);
    int concorrents (std::vector<Item>);
    void comecarContar(int);
    const std::vector <Item > &getItens();
    void setItens( const std::vector <Item> & );

    virtual ~Estoque();
}



#endif //ESTOQUE_H
#include "item.h"

//GET
int Item::getCodigo() const {
    return codigo;
}

double Item::getPreco() const {
    return preco;
}

const std::string &Item::getFornecedor() const {
    return fornecedor;
}

const std::string &Item::getDescricao() const {
    return descricao;
}

int Item::getDia() const {
    return dia;
}

int Item::getMes() const {
    return mes;
}

int Item::getAno() const {
    return ano;
}

int Item::getDuracao() const {
    return duracao;
}

//SET
void Item::setCodigo(int codigo) {
    Item::codigo = codigo;
}

void Item::setPreco(double preco) {
    Item::preco = preco;
}

void Item::setFornecedor(const std::string &fornecedor) {
    Item::fornecedor = fornecedor;
}

void Item::setDescricao(const std::string &descricao) {
    Item::descricao = descricao;
}
void Item::setDia( int dia ) {
    Item::dia = dia;
}
void Item::setMes( int mes ) {
    Item::mes = mes;
}
void Item::setAno( int ano ) {
    Item::ano = ano;
}

void Item::setDuracao( int duracao ) {
    Item::duracao = duracao;
}

Item::Item(int codigo, double preco,const std::string &fornecedor,const std::string &descricao,int dia, int mes, int ano,int duracao) : codigo(codigo),preco(preco),fornecedor(fornecedor), descricao(descricao), dia( dia ), mes( mes ), ano( ano ), duracao(duracao){}
Item::Item() {}
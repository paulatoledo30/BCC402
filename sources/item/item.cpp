#include "item.hpp"

//GET
int Item::getCodigo(){
    return codigo;
}

double Item::getPreco(){
    return preco;
}

const std::string Item::getFornecedor(){
    return fornecedor;
}

const std::string Item::getDescricao(){
    return descricao;
}

int Item::getDia()  {
    return dia;
}

int Item::getMes()  {
    return mes;
}

int Item::getAno()  {
    return ano;
}

int Item::getDuracao()  {
    return duracao;
}

//SET
void Item::setCodigo(int codigo) {
    Item::codigo = codigo;
}

void Item::setPreco(double preco) {
    Item::preco = preco;
}

void Item::setFornecedor(std::string fornecedor) {
    Item::fornecedor = fornecedor;
}

void Item::setDescricao(std::string descricao) {
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

Item::Item() {}

Item::Item( int codigo, double preco, std::string fornecedor, std::string descricao, int dia, int mes, int ano,
            int duracao ) {

}

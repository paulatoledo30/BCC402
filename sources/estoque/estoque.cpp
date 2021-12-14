#include "estoque.h"
#include <iostream>

using namespace std;

// Estrutura necessaria para recuperar o tempo atual da maquina
struct tm* recuperarData(){
    time_t tt;
    time(&tt);
    return localtime(&tt);
}

void Estoque::addItemEstoque (int codigo, double preco, const std::string &fornecedor,const std::string &descricao, int dia, int mes, int ano, int duracao){
    Item item;
    item.setCodigo(codigo);
    item.setPreco(preco);
    item.setFornecedor(fornecedor);
    item.setDescricao(descricao);
    item.setDia(dia);
    item.setMes(mes);
    item.setAno(ano);
    item.setDuracao(duracao);
    addItem(item);
}

void Estoque::addItem (Item item){
    itens.push_back(item);
}
                                                                     descricao(descricao) {}
void Estoque::exibeItensEstoque(Estoque estoque){
    itens= estoque.getItens();

    if (!itens.empty()) {
        cout << "--------------- Itens no estoque --------------" << endl;
        for (const auto &item : itens ) {
            cout << "Código: " << item.getCodigo() << endl;
            cout << "Preço: " << item.getPreco() << endl;
            cout << "Descrição: " << item.getDescricao() << endl;
            cout << "Fornecedor: " << item.getFornecedor() << endl;
            cout << "Data validade: " << item.getDia() << "/" << item.getMes() << "/" << item.getAno()<< endl;
            cout << "-------------------------------------------------------" << endl;
        }
    }else {
        cout << "Nenhum item encontrado ou cadastrado " << endl;
    }
}
int Estoque::concorrents (vector<Item> item){
    if (!item.empty()){
        if (item.size() >= 2 ) {
            for ( int i = 0; i < item.size(); i++ ) {
                if ( item[ i ].getDia() == item[ i+1 ].getDia()
                     && item[i].getMes() == item[i+1].getMes()
                     && item[i].getAno() == item[i+1].getAno()){
                         if ( item[i].getDuracao() > item[i+1].getDuracao() ){
                            comecarContar(item[i].getDuracao() - item[i+1].getDuracao());
                            return 1;
                        }
                    }
                }else {
                    return 0;
               }
        }
    }
}

void telaRelogio(int horas, int minutos, int segundos) {
    system("cls"); // system call to clear the screen

    std::cout << std::setfill(' ') << std::setw(30) << " --------------------------\n";
    std::cout << std::setfill(' ') << std::setw(3);
    std::cout << "| " << std::setfill('0') << std::setw(2) << horas << " hrs | ";
    std::cout << std::setfill('0') << std::setw(2) << minutos << " min | ";
    std::cout << std::setfill('0') << std::setw(2) << segundos << " sec |" << std::endl;
    std::cout << std::setfill(' ') << std::setw(30) << " --------------------------\n";
}

void crono(int horas, int minutos, int segundos) {
    while (horas > 0 || minutos > 0 || segundos > 0) {
        telaRelogio(horas, minutos, segundos);
        sleep(1);

        if (segundos > 0) segundos--; // decrementa segundos
        else {
            segundos = 59;
            if (minutos > 0) minutos--; // decrementa minutos
            else {
                minutos = 59;
                if (horas > 0) horas--; // decrementa horas
            }
        }
    }
}

void Estoque::comecarContar(int duracao ){
    std::thread t( crono, 0, duracao, 0);
    t.join();
}


Estoque::Estoque() = default;

Estoque::Estoque(int codigo, double preco, const string &fornecedor, const string &descricao, int dia, int mes, int ano, int duracao) {
    addItemEstoque(codigo,preco,fornecedor,descricao,dia,mes,ano,duracao);
}

const vector <Item > &Estoque::getItens()  {
    return itens;
}

void Estoque::setItens( const vector <Item > &itens ) {
    Estoque::itens = itens;
}

Estoque::~Estoque() {
}

//Arquivo de cabeçalho (Interface)

using namespace std;

class Pilha {

private: //atributos visiveis somente na classe onde é utilizado. Por default já são privados!
    int *itens;
    int topo;
    int maximo;

public: //visiveis a todas as classes do projeto
//declaracao da assinatura dos metodos
    Pilha();
    Pilha(int n);
    bool empty();
    bool full();
    bool push(int);
    int pop();
    string print();
    int qtdElementos();
    int localizaPosicao(int v);
    int contabilizaAcima(int v);
    int repetidos(int v);
};

//Arquivo de cabe�alho (Interface)

//� um arquivo reutiliz�vel no projeto e cont�m a declara��o da classe, 
//atributos e metodos (mas nao suas implementacoes)

using namespace std;

class Pilha{

private: //atributos visiveis somente na classe onde � utilizado. Por default j� s�o privados!
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
    int localiza(int v);
    int contabilizaAcima(int v);
    void repetidos();
};

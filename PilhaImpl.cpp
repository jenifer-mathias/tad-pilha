#include <sstream>
#include <iostream>
#include "Pilha.h" //arquivo Header (interface)

using namespace std;

// ------ IMPLEMENTACAO dos MÉTODOS de Pilha declarados no Header (Pilha.h)

//construtor primário
Pilha::Pilha() {}

//construtor secundário (Polimorfismo/Sobrecarga)
Pilha::Pilha(int n) {
    topo = -1; // pilha vazia, topo = -1
    itens = new int[n]; // usando um vetor de inteiros para criar a Pilha
    maximo = n; // tamanho maximo da pilha
}

bool Pilha::empty() {
    return (topo == -1);
}

/**
 * Pilha cheia
*/
bool Pilha::full() {
    return topo == maximo - 1;
}

/**
 * Insere um elemento na pilha.
*/
bool Pilha::push(int elem) {
    if (full()) {
        cout << "\nA pilha está cheia!\n";
        return false;
    }
    topo++;
    itens[topo] = elem;
    return true;
}

/**
 * Remove um elemento da pilha.
*/
int Pilha::pop() {
    if (empty()) return -1;
    int elem = itens[topo];
    topo--;
    return elem;
}

/**
 * Retorna uma string com o conteúdo da pilha impressa
*/
void Pilha::print(Pilha &pilha) {
    Pilha aux(topo + 1);
    int dado;
    if (pilha.qtdElementos() == 0) {
        cout << "A pilha está vazia!" << endl;
    } else {
        cout << "\n\nPilha:" << endl;
        for (int i = pilha.topo; i >= 0; i--) {
            dado = pilha.pop(); //tira da pilha original
            cout << dado << endl; //imprime
            aux.push(dado);//guarda na pilha auxiliar
        }
        //acabou de imprimir? volta os dados para a pilha original
        for (int i = aux.topo; i >= 0; i--) {
            dado = aux.pop(); //tira da pilha auxiliar
            pilha.push(dado);//insere na pilha original
        }
    }
}

int Pilha::qtdElementos() {
    return topo + 1;
}

/**
Verifica se um elemento está na pilha
Se a pilha estiver vazia, retorna -1;
se o elemento nao estiver na pilha, retorna 0.
se estiver, retorna sua posição em relação ao topo. (Retorna somente a primeira ocorrência).
*/
int Pilha::localizaPosicao(int num) {
    int i;
    int posicao;
    if (empty()) return -1;
    for (i = 0; i <= topo; i++) {
        if (itens[i] == num) {
            posicao = i;
        }
    }
    return topo - posicao;
}

/**
Conta elementos maiores que determinado valor.
*/
int Pilha::contabilizaAcima(int num) {
    int i;
    int contador = 0;
    if (empty()) return -1;
    for (i = 0; i <= topo; i++) {
        if (itens[i] > num) {
            contador++;
        }
    }
    return contador;
}

void Pilha::repetidos(int num) {
    int contador = 0;
    int i;
    Pilha aux(topo + 1);
    int dado;
    if (qtdElementos() == 0) {
        cout << "A pilha está vazia!" << endl;
    } else {
        cout << "\nPilha:" << endl;
        for (i = topo; i >= 0; i--) {
            if (itens[topo] == num) {
                contador++;
            }
            dado = pop(); //tira da pilha original
            cout << dado << endl; //imprime
            aux.push(dado);//guarda na pilha auxiliar
        }
        cout << "\nNúmero de recorrências que aparece o número " << num << ": ";
        cout << contador << endl; //imprime recorrências
        // volta os dados para a pilha original
        for (i = aux.topo; i >= 0; i--) {
            dado = aux.pop(); //tira da pilha auxiliar
            push(dado); //insere na pilha original
        }
    }
}

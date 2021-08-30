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
string Pilha::print() {
    stringstream ss;
    ss << "";
    if (empty()) {
        ss << "A pilha está vazia.";
    } else {
        cout << "\n\nPilha:" << endl;
        for (int i = topo; i >= 0; i--) {
            if (i == topo) {
                ss << " " << itens[i] << "  <-- Topo\n";
            } else ss << " " << itens[i] << "\n";
        }
    }
    return ss.str();
}

/**
Retorna a quantidade de elementos da pilha
*/
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
        if (itens[i] >= num) {
            contador++;
        }
    }
    return contador - 1;
}

int Pilha::repetidos(int num) {
    int contador = 0;
    int i;
    if (empty()) return -1;
    for (i = 0; i <= topo; i++) {
        if (itens[i] == num) {
            contador++;
        }
    }
    return contador;
}

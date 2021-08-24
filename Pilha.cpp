#include <sstream>
#include <iostream>
#include "Pilha.h" //arquivo Header (interface)

// ------ IMPLEMENTACAO dos MÉTODOS de Pilha declarados no Header (Pilha.h)

//construtor da classe Pilha (padrao)
Pilha::Pilha() {}

//construtor da classe Pilha que aceita argumentos (Polimorfismo/Sobrecarga)
Pilha::Pilha(int n) {
    topo = -1; //pilha vazia, topo = -1
    itens = new int[n]; //usando um vetor de inteiros para criar nossa Pilha
    maximo = n; //tamanho maximo da pilha
}

bool Pilha::empty() {
    return (topo == -1);
}

bool Pilha::full() {
    return topo == maximo - 1;
}

/**
 * Insere um elemento na pilha.
 */
bool Pilha::push(int elem) {
    if (full()){
    	cout << "\nA pilha ja esta cheia!\n";
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
    if (empty())
        return -1;
    int elem = itens[topo];
    topo--;
    return elem;
}

/**
 * Retorna uma string com o conteudo da pilha impressa
 */
string Pilha::print() {

    stringstream ss;
    ss << "";
    if (empty()) {
        ss << "A pilha esta' vazia.";
    } else {  
		cout << "\n\nPilha:" << endl;      
        for (int i = topo; i >= 0; i--) {
        	if (i == topo){
        		ss << " " << itens[i] << "  <-- Topo\n";	
			}else
            	ss << " " << itens[i] << "\n";
        }        
    }

    return ss.str();
		
}

/*
Retorna a quantidade de elementos da pilha
*/
int Pilha::qtdElementos() {
    return topo + 1;
}

/*
Verifica se um elemento esta' na pilha e retorna sua posicao em relacao ao topo.
Retorna somente a primeira ocorrencia.
Se a pilha estiver vazia, retorna -1; se o elemento nao estiver na pilha, retorna 0.
*/
int Pilha::localiza(int v) {
   //Implementar

    return 0; //> passou pelo laco for e nao achou
}

/*
Conta elementos maiores que determinado valor.
*/
int Pilha::contabilizaAcima(int v) {
    //Implementar
    int qtd = 0;
    return qtd;
}


//Declarar e Implementar o metodo void repetidos()

//Se chegou ate aqui e validou todos os metodos parabens!

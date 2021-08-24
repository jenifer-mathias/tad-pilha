/* ******************************************************************
 TAD Pilha
 Implementacao usando Classe
 Estrutura de Dados I
****************************************************************** */
#include <cstdlib>
#include <iostream>
#include <conio.h>

#include "Pilha.h" //Header com declaracao dos metodos/operacoes 

using namespace std;

// ----------------- Metodo main para teste do TAD Pilha
int main() {

	cout << "\n              Iniciando a execucao ... \n\n\n";
	cout << "Antes de tudo, qual o tamanho da pilha que deseja criar? ";
	int tam;
	cin >> tam;

	Pilha p(tam); //criando uma Pilha de tamanho tam

	while(true) {
		cout << "\n\n\n";
		cout << "\n---------------------------------------------------------------";
		cout << "\n              PROGRAMA PARA TESTAR O TAD PILHA";
		cout << "\n (esta pilha so' aceita numeros inteiros maiores do que zero)";
		cout << "\n---------------------------------------------------------------";
		cout << "\n";			
		cout << "\n0 - sair";		
		cout << "\n1 - quantidade de elementos na pilha";
		cout << "\n2 - inserir um elemento na pilha";
		cout << "\n3 - remover um elemento da pilha (retorna o elemento)";
		cout << "\n4 - verifica se determinado elemento esta' na pilha ";
		cout << "\n    e retorna sua posicao em relacao ao topo";
		cout << "\n5 - contabiliza os elementos acima de um determinado valor";
		cout << "\n6 - verificar se ha' elementos repetidos ";
		cout << "\n    (imprime os elementos e a quantidade de ocorrencias)";
		cout << "\n9 - imprimir a pilha";

		cout << "\n\nInforme sua opcao: ";
		int opc;
		cin >> opc;

		if (opc == 0) {
			break;
		}
		if (opc == 1) {
		    int x = p.qtdElementos();
            cout << "\nA pilha contem " << x << " elemento";
            if (x > 1) cout << "s";
		}
		if (opc == 2) {
			int opc2;
			cout << "\nValor do elemento a ser inserido: ";
			cin >> opc2;
			if (p.push(opc2)){
				cout << "\nInserido com sucesso.";
			}
		}
		if (opc == 3) {
			int x = p.pop();
			if (x==-1){
				cout << "\nA pilha esta' vazia.";
			}
			else{
				cout << "\nElemento " << x << " removido.";
			}

		}
		if (opc == 4) {
		    cout << "\nInforme o elemento que deseja procurar: ";
            int opc4;
            cin >> opc4;
            int x = p.localiza(opc4);
            if (x<=0) {
                cout << "\nNao localizado (ou a pilha esta' vazia)";
            }
            else{
                cout << "\nLocalizado na posicao " << x;
            }

		}
		if (opc == 5) {
            cout << "\nInforme o valor: ";
            int opc5;
            cin >> opc5;
            int x = p.contabilizaAcima(opc5);
            cout << "\n" << x << " elemento(s) acima de " << opc5;
		}
		if (opc == 6) {
           // p.repetidos();
		}
		if (opc == 9) {
			cout << p.print();
		}

		cout << "\n\n    -- pressione qqr. tecla -- ";
		getch();

	}

	cout << "\n\n\n------ Fim da execucao! ------";

	return 0;
}

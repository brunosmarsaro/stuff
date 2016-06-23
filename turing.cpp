#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <map>

using namespace std;

struct Tu{
	char escrito;
	char mov;
	string novo;
};
typedef struct Tu upla;

vector < vector < string > > graph;

int main(){
	bool op = true;

	while(op){
	system("clear");
	cout << " |******************** MAQUINA DE TURING ********************|" << endl;
	cout << " |                                                           |" << endl;
	cout << " | Inserindo o conjunto de estados                           |" << endl;
	cout << " | Quantos estados existem?                                  |" << endl;
	int nq;	
	cin >> nq;
	cout << " | Entre com os estados:                                     |" << endl;	
	vector <string> estados;
	estados.resize(nq);
	for(int i = 0; i < nq; i++){
		string aux;
		cin >> aux;
		estados[i] = aux;
	}

	cout << " | Inserindo o alfabeto                                      |" << endl;
	cout << " | Quantos simbolos exitem no alfabeto?                      |" << endl;
	int na;
	cin >> na;
	vector <char> alfabeto;
	alfabeto.resize(na);
	cout << " | Entre com os simbolos contidos no alfabeto:               |" << endl;
	for(int i = 0; i  < na; i++){
		char aux;
		cin >> aux;
		alfabeto[i] = aux;
	}
	
	cout << " | Inserindo o conjunto dos simbolos auxiliares              |" << endl;
	cout << " | Quantos simbolos existem no conjunto?                     |" << endl;
	int ns;
	cin >> ns;
	vector<char> variaveis;
	variaveis.resize(ns);
	cout << " | Entre com os simbolos auxiliares:                         |" << endl;
	for(int i = 0; i < ns; i++){
		char aux;
		cin >> aux;
		variaveis[i] = aux;
	}

	cout << " | Entre com o estado inicial:                               |" << endl;
	string inicial;
	cin >> inicial;

	cout << " | Entre com o simbolo que denote branco (espaço vazio)      |" << endl;
	string branco;
	cin >> branco;

	cout << " | Inserindo o conjunto dos estados finais                   |" << endl;
	cout << " | Quantos estados finais existem?                           |" << endl;
	int nf;
	cin >> nf;
	vector<string> finais;
	finais.resize(nf);
	cout << " | Entre com os estados finais                               |" << endl;
	for(int i = 0; i < nf; i++){
		string aux;
		cin >> aux;
		finais[i] = aux;
	}

	cout << " | Inserindo a Função de Transição                           |" << endl;
	cout << " | Cada inserção seguirá a seguinte forma:                   |" << endl;
	cout << " |                                                           |" << endl;
	cout << " | estado_atual, simbolo_lido, simbolo_escrito, movimento,   |" << endl;
	cout << " | estado_novo                                               |" << endl;
	cout << " |                                                           |" << endl;
	cout << " | Exemplo:  q0 a X D q1                                     |" << endl;


	map< string, vector< map< char, upla > > > transicoes;	
	/* 
		AQUI FICA A FUNCAO DE LER TODA A TABELA DE TRANSICAO
		 	*/

	// OBJs:
	// É necessario saber quantos estados sao no total
	// O estado inicial e o conjunto de estados finais.


	cout << " | Rodada de Testes                                          |" << endl;
	cout << " | Entre com a fita:                                         |" << endl;
	string fita;
	
	/*
		AQUI FICA O TESTE DA FITA -> ACEITA, REJEITA, OU LOOP
			*/

	cout << " | Deseja entrar com uma nova maquina? [y/n]                 |" << endl;
	char o;
	cin >> o;
	if (o == 'n') op = false;
	}

	return 0;
}

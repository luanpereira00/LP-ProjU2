#include <iostream>
using std::cout;
using std::cerr;
using std::cin;
using std::getline;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <cstdlib>
using std::exit;

#include "arquivo.h"
#include "estoque.h"

void loadData(Estoque *e){
	string aux;

	string opening = "./data/listaBebidas.csv";
	ifstream estoque(opening);

	while(estoque){
		getline(estoque, aux);
		e->inserirBebidas(aux);
	}
	
	getline(*arquivo, aux);
	dados->setPalavras(atoi(aux.c_str()));

	getline(*arquivo, aux);
	dados->setLinhas(atoi(aux.c_str()));

	getline(*arquivo, aux);
	dados->setPrincipal(atoi(aux.c_str()));

	getline(*arquivo, aux);
	dados->setMapeamento(atoi(aux.c_str()));

	getline(*arquivo, aux);
	dados->setVias(atoi(aux.c_str()));

	getline(*arquivo, aux);
	dados->setSubstituicao(atoi(aux.c_str()));

	getline(*arquivo, aux);
	dados->setEscrita(atoi(aux.c_str()));
}
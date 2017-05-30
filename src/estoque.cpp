#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include "estoque.h"
#include "lista.h"

#include "bebidas.h"
#include "cds.h"
#include "doces.h"
#include "dvds.h"
#include "frutas.h"
#include "livros.h"
#include "salgados.h"

Estoque::Estoque(){
	ll_Prod = new lista<Produtos>;
	ultimaChave=0;
}

Estoque::~Estoque(){
	delete ll_Prod;
}

lista<Produtos>* Estoque::getListaProdutos(){ return ll_Prod; }
void Estoque::setListaProdutos(lista<Produtos>* ll){ ll_Prod = ll;}

void Estoque::setLastKey(int a){ ultimaChave = a; }
int Estoque::getLastKey(){ return ultimaChave; }




void Estoque::listarEstoque(){ 
	cout << "-----------------------" << endl;
	cout << "Lista de Estoque: " << endl << endl;
	if(ll_Prod->contarElementos()>0) {
		cout << "Lista de Bebidas: " << endl;
		ll_Prod->imprimir();
	}
	cout << "-----------------------" << endl;
}

void Estoque::lerDados(){
	string opening;
	int key = 0;

	opening = "./data/listasProdutos/ll_Prod.csv";
	ifstream prod(opening);
	if(!prod) cerr << "Impossivel abrir o arquivo de Bebidas!" << endl;
	else{
		ll_Prod->lerArquivo(&prod);
		prod.close();
	}
	
	key = getMaxKey();
	setLastKey(key);
	cout << getLastKey() << endl;

	

}
void Estoque::gravarDados(){
	string closing;

	closing = "./data/listasProdutos/ll_Prod.csv";
	ofstream prod(closing);
	ll_Prod->imprimirArquivo(&prod);
	prod.close();
}

int Estoque::getMaxKey(){
	int key = 0;
	key = ll_Prod->maxKey();

	return key;
}

/**
 * @file	estoque.cpp
 * @brief	Implementacao da classe Estoque para representar um estoque de produtos
 * @details Os atributos de um Estoque sao as listas de produtos e ultima chave primaria associada
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <string>
using std::to_string;
using std::string;

#include "estoque.h"

/**@brief Construtor padrao*/
Estoque::Estoque(){
	ll_Bebidas = new lista<Bebidas>;
	ll_CDs = new lista<CDs>;
	ll_Doces = new lista<Doces>;
	ll_DVDs = new lista<DVDs>;
	ll_Frutas = new	lista<Frutas>;
	ll_Livros = new lista<Livros>;
	ll_Salgados = new lista<Salgados>;
	ultimaChave=0;
}

/**@brief Destrutor padrao*/
Estoque::~Estoque(){
	delete ll_Bebidas;
	delete ll_CDs;
	delete ll_Doces;
	delete ll_DVDs;
	delete ll_Frutas;
	delete ll_Livros;
	delete ll_Salgados;
}

/**@return Retorna a lista de bebidas */
lista<Bebidas>* Estoque::getListaBebidas(){ return ll_Bebidas; }

/**@return Retorna a lista de cds */
lista<CDs>* Estoque::getListaCDs(){ return ll_CDs; }

/**@return Retorna a lista de doces */
lista<Doces>* Estoque::getListaDoces(){ return ll_Doces; }

/**@return Retorna a lista de dvds */
lista<DVDs>* Estoque::getListaDVDs(){ return ll_DVDs; }

/**@return Retorna a lista de frutas */
lista<Frutas>* Estoque::getListaFrutas(){ return ll_Frutas; }

/**@return Retorna a lista de livros */
lista<Livros>* Estoque::getListaLivros(){ return ll_Livros; }

/**@return Retorna a lista de salgados */
lista<Salgados>* Estoque::getListaSalgados(){return ll_Salgados; }

/**@brief Atualiza a ultima chave associada */
void Estoque::setLastKey(int a){ ultimaChave = a; }

/**@return Retorna a ultima chave associada */
int Estoque::getLastKey(){ return ultimaChave; }

/**@brief Atualiza a lista de bebidas */
void Estoque::setListaBebidas(lista<Bebidas>* ll){ ll_Bebidas = ll;}

/**@brief Atualiza a lista de cds */
void Estoque::setListaCDs(lista<CDs>* ll){ ll_CDs = ll;}

/**@brief Atualiza a lista de doces */
void Estoque::setListaDoces(lista<Doces>* ll){ ll_Doces = ll;}

/**@brief Atualiza a lista de dvds */
void Estoque::setListaDVDs(lista<DVDs>* ll){ ll_DVDs = ll;}

/**@brief Atualiza a lista de frutas */
void Estoque::setListaFrutas(lista<Frutas>* ll){ ll_Frutas = ll;}

/**@brief Atualiza a lista de livros */
void Estoque::setListaLivros(lista<Livros>* ll){ ll_Livros = ll;}

/**@brief Atualiza a lista de salgados */
void Estoque::setListaSalgados(lista<Salgados>* ll){ ll_Salgados = ll;}

/**@brief Lista todo o estoque  */
void Estoque::listarEstoque(){ 
	cout << "-----------------------" << endl;
	cout << "Lista de Estoque: " << endl << endl;
	if(ll_Bebidas->contarElementos()>0) {
		cout << "Lista de Bebidas: " << endl;
		ll_Bebidas->imprimirTela();
	}
	if(ll_CDs->contarElementos()>0) {
		cout << endl << "Lista de CDs: " << endl;
		ll_CDs->imprimirTela();
	}
	if(ll_Doces->contarElementos()>0) {
		cout << endl << "Lista de Doces: " << endl;
		ll_Doces->imprimirTela();
	}
	if(ll_DVDs->contarElementos()>0) {
		cout << endl << "Lista de DVDs: " << endl;
		ll_DVDs->imprimirTela();
	}
	if(ll_Frutas->contarElementos()>0) {
		cout << endl << "Lista de Frutas: " << endl;
		ll_Frutas->imprimirTela();
	}
	if(ll_Livros->contarElementos()>0) {
		cout << endl << "Lista de Livros: " << endl;
		ll_Livros->imprimirTela();
	}
	if(ll_Salgados->contarElementos()>0) {
		cout << endl << "Lista de Salgados: " << endl;
		ll_Salgados->imprimirTela();
	}
	cout << "-----------------------" << endl;
}

/**@brief Le os dados da memoria para inicializar o estoque  */
void Estoque::lerDados(){
	string opening;
	int key = 0;

	opening = "./data/listasProdutos/ll_Bebidas.csv";
	ifstream bebida(opening);
	if(!bebida) cerr << "Impossivel abrir o arquivo de Bebidas!" << endl;
	else{
		ll_Bebidas->lerArquivo(&bebida);
		bebida.close();
	}
	
	opening = "./data/listasProdutos/ll_CDs.csv";
	ifstream cd(opening);
	if(!cd) cerr << "Impossivel abrir o arquivo de CDs!" << endl;
	else{
		ll_CDs->lerArquivo(&cd);
		cd.close();
	}

	opening = "./data/listasProdutos/ll_Doces.csv";
	ifstream doce(opening);
	if(!doce) cerr << "Impossivel abrir o arquivo de Doces!" << endl;
	else{
		ll_Doces->lerArquivo(&doce);
		doce.close();
	}

	opening = "./data/listasProdutos/ll_DVDs.csv";
	ifstream dvd(opening);
	if(!dvd) cerr << "Impossivel abrir o arquivo de DVDs!" << endl;
	else{
		ll_DVDs->lerArquivo(&dvd);
		dvd.close();
	}

	opening = "./data/listasProdutos/ll_Frutas.csv";
	ifstream fruta(opening);
	if(!fruta) cerr << "Impossivel abrir o arquivo de Frutas!" << endl;
	else{
		ll_Frutas->lerArquivo(&fruta);
		fruta.close();
	}

	opening = "./data/listasProdutos/ll_Livros.csv";
	ifstream livro(opening);
	if(!livro) cerr << "Impossivel abrir o arquivo de Livros!" << endl;
	else{
		ll_Livros->lerArquivo(&livro);
		livro.close();
	}

	opening = "./data/listasProdutos/ll_Salgados.csv";
	ifstream salgado(opening);

	if(!salgado) cerr << "Impossivel abrir o arquivo de Salgados!" << endl;
	else{
		ll_Salgados->lerArquivo(&salgado);
		salgado.close();
	}
	
	key = getMaxKey();
	setLastKey(key);
	//cout << getLastKey() << endl;
}

/**@brief Grava os dados do estoque na memoria  */
void Estoque::gravarDados(){
	string closing;

	closing = "./data/listasProdutos/ll_Bebidas.csv";
	ofstream bebida(closing);
	ll_Bebidas->imprimirArquivo(&bebida);
	bebida.close();

	closing = "./data/listasProdutos/ll_CDs.csv";
	ofstream cd(closing);
	ll_CDs->imprimirArquivo(&cd);
	cd.close();

	closing = "./data/listasProdutos/ll_Doces.csv";
	ofstream doce(closing);
	ll_Doces->imprimirArquivo(&doce);
	doce.close();

	closing = "./data/listasProdutos/ll_DVDs.csv";
	ofstream dvd(closing);
	ll_DVDs->imprimirArquivo(&dvd);
	dvd.close();

	closing = "./data/listasProdutos/ll_Frutas.csv";
	ofstream fruta(closing);
	ll_Frutas->imprimirArquivo(&fruta);
	fruta.close();

	closing = "./data/listasProdutos/ll_Livros.csv";
	ofstream livro(closing);
	ll_Livros->imprimirArquivo(&livro);
	livro.close();

	closing = "./data/listasProdutos/ll_Salgados.csv";
	ofstream salgado(closing);
	ll_Salgados->imprimirArquivo(&salgado);
	salgado.close();
}

/**@brief Pega a maior chave associada ao produtos do estoque  */
int Estoque::getMaxKey(){
	int keyAux, key = 0;
	keyAux = ll_Bebidas->maxKey();
	if(keyAux>key) key = keyAux;

	keyAux = ll_CDs->maxKey();
	if(keyAux>key) key = keyAux;

	keyAux = ll_Doces->maxKey();
	if(keyAux>key) key = keyAux;

	keyAux = ll_DVDs->maxKey();
	if(keyAux>key) key = keyAux;

	keyAux = ll_Frutas->maxKey();
	if(keyAux>key) key = keyAux;

	keyAux = ll_Livros->maxKey();
	if(keyAux>key) key = keyAux;

	keyAux = ll_Salgados->maxKey();
	if(keyAux>key) key = keyAux;

	return key;
}




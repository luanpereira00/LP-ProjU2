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
	ll_Bebidas = new lista<Bebidas>;
	ll_CDs = new lista<CDs>;
	ll_Doces = new lista<Doces>;
	ll_DVDs = new lista<DVDs>;
	ll_Frutas = new	lista<Frutas>;
	ll_Livros = new lista<Livros>;
	ll_Salgados = new lista<Salgados>;
	ultimaChave=0;
}

lista<Bebidas>* Estoque::getListaBebidas(){ return ll_Bebidas; }
lista<CDs>* Estoque::getListaCDs(){ return ll_CDs; }
lista<Doces>* Estoque::getListaDoces(){ return ll_Doces; }
lista<DVDs>* Estoque::getListaDVDs(){ return ll_DVDs; }
lista<Frutas>* Estoque::getListaFrutas(){ return ll_Frutas; }
lista<Livros>* Estoque::getListaLivros(){ return ll_Livros; }
lista<Salgados>* Estoque::getListaSalgados(){return ll_Salgados; }

void Estoque::setLastKey(int a){ ultimaChave = a; }
int Estoque::getLastKey(){ return ultimaChave; }

void Estoque::setListaBebidas(lista<Bebidas>* ll){ ll_Bebidas = ll;}
void Estoque::setListaCDs(lista<CDs>* ll){ ll_CDs = ll;}
void Estoque::setListaDoces(lista<Doces>* ll){ ll_Doces = ll;}
void Estoque::setListaDVDs(lista<DVDs>* ll){ ll_DVDs = ll;}
void Estoque::setListaFrutas(lista<Frutas>* ll){ ll_Frutas = ll;}
void Estoque::setListaLivros(lista<Livros>* ll){ ll_Livros = ll;}
void Estoque::setListaSalgados(lista<Salgados>* ll){ ll_Salgados = ll;}

void Estoque::listarEstoque(){ 
	cout << "-----------------------" << endl;
	cout << "Lista de Estoque: " << endl << endl;
	cout << "Lista de Bebidas: " << endl;
	ll_Bebidas->imprimir();
	cout << endl << endl << "Lista de CDs: " << endl;
	ll_CDs->imprimir();
	cout << endl << endl << "Lista de Doces: " << endl;
	ll_Doces->imprimir();
	cout << endl << endl << "Lista de DVDs: " << endl;
	ll_DVDs->imprimir();
	cout << endl << endl << "Lista de Frutas: " << endl;
	ll_Frutas->imprimir();
	cout << endl << endl << "Lista de Livros: " << endl;
	ll_Livros->imprimir();
	cout << endl << endl << "Lista de Salgados: " << endl;
	ll_Salgados->imprimir();
	cout << "-----------------------" << endl;
}


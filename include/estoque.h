#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "lista.h"

#include "bebidas.h"
#include "cds.h"
#include "doces.h"
#include "dvds.h"
#include "frutas.h"
#include "livros.h"
#include "salgados.h"

//TAMBEM UTILIZADA PARA CARRINHO
class Estoque {
private:
	lista<Bebidas>* ll_Bebidas;
	lista<CDs>* ll_CDs;
	lista<Doces>* ll_Doces;
	lista<DVDs>* ll_DVDs;
	lista<Frutas>* ll_Frutas;
	lista<Livros>* ll_Livros;
	lista<Salgados>* ll_Salgados;
	int ultimaChave;
	
public:
	Estoque();
	~Estoque();

	lista<Bebidas>* getListaBebidas();
	lista<CDs>* getListaCDs();
	lista<Doces>* getListaDoces();
	lista<DVDs>* getListaDVDs();
	lista<Frutas>* getListaFrutas();
	lista<Livros>* getListaLivros();
	lista<Salgados>* getListaSalgados();

	int getLastKey();
	void setLastKey(int a);

	void setListaBebidas(lista<Bebidas>* ll);
	void setListaCDs(lista<CDs>* ll);
	void setListaDoces(lista<Doces>* ll);
	void setListaDVDs(lista<DVDs>* ll);
	void setListaFrutas(lista<Frutas>* ll);
	void setListaLivros(lista<Livros>* ll);
	void setListaSalgados(lista<Salgados>* ll);

	void listarEstoque();
	void lerDados();
	int getMaxKey();
	void gravarDados();

	bool carrinhoIsEmpty();
	int verUltimaNotaFiscal();
	void gravarComoCarrinho();
	void listarComoCarrinho();

	void lerComoNotaFiscal();
};

#endif
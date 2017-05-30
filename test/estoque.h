#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "lista.h"
#include "produtos.h"

class Estoque {
private:
	lista<Produtos>* ll_Prod;
	int ultimaChave;
	
public:
	Estoque();
	~Estoque();

	lista<Produtos>* getListaProdutos();
	void setListaProdutos(lista<Produtos>* ll);

	int getLastKey();
	void setLastKey(int a);

	void listarEstoque();
	void lerDados();
	int getMaxKey();
	void gravarDados();
};

#endif
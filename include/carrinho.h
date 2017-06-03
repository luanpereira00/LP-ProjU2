#ifndef CARRINHO_H
#define CARRINHO_H

#include "estoque.h"

#include <string>
using std::to_string;
using std::string;

class Carrinho : public Estoque {
public:
	bool carrinhoIsEmpty();
	int verUltimaNotaFiscal();
	void gravarArquivo();
	void listar();
	void limpar();
};

#endif
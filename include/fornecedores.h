#ifndef FORNECEDORES_H
#define FORNECEDORES_H

#include "estoque.h"

class Fornecedores {
private:
	string nomeEmpresa;
	int tipoProduto;
	int chaveProduto;
	int qtdProduto;

public:
	Fornecedores();
	Fornecedores(string s, int p, int c, int q);

	string getNome();
	int getProduto();
	int getChave();
	int getQtd();

	void setNome(string n);
	void setProduto(int p);
	void setChave(int c);
	void setQtd(int q);

	void imprimirTela();
	void imprimirArquivo();
	void lerArquivo();
	void criar();

	int getLastFornecedores();
	bool verificarNoEstoque(Estoque *e);

	friend ostream& operator<<(ostream& os, Fornecedores &a);
	friend istream& operator>>(istream& is, Fornecedores &a);
};

#endif
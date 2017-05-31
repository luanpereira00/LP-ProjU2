#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <string>
using std::string;

class Produtos{
protected: 
	int chave;
	string nomeProduto;
	float precoUnitario;
	int qtdEstoque;

public:
	Produtos();
	~Produtos();
	Produtos(int c, string n, float p, int e);

	int getChave();
	string getNomeProd();
	float getPrecoUnit();
	int getQtdEstoque();

	void setChave(int c);
	void setNomeProd(string n);
	void setPrecoUnit(float p);
	void setQtdEstoque(int e);

	bool operator<(Produtos p);
};

#endif
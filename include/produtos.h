#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <string>
using std::string;

class Produtos{
protected: 
	int chave;
	int tipo;
	string nomeProduto;
	float precoUnitario;
	int qtdEstoque;

public:
	Produtos();
	~Produtos();
	virtual ~Produtos(){};
	Produtos(int c, int t, string n, float p, int e);

	int getChave();
	int getTipo();
	string getNomeProd();
	float getPrecoUnit();
	int getQtdEstoque();

	void setChave(int c);
	void setTipo(int t);
	void setNomeProd(string n);
	void setPrecoUnit(float p);
	void setQtdEstoque(int e);

	bool operator<(Produtos p);

};

#endif
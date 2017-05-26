#ifndef SALGADOS_H
#define SALGADOS_H

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

class Salgados : public Produtos, Pereciveis {
private:
	float qtdSodio;
	bool gluten;
	bool lactose;

public:
	Salgados();
	~Salgados();
	Salgados(int c, string n, float p, int e, float s, bool gt, bool lt, Data dv);

	float getQtdSodio();
	bool getGluten();
	bool getLactose();

	void setQtdSodio(float s);
	void setGluten(bool gt);
	void setLactose(bool lt);
};

#endif
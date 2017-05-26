#ifndef SALGADOS_H
#define SALGADOS_H

#include "produtos.h"

class Salgados : public Produtos {
private:
	float qtdSodio;
	bool gluten;
	bool lactose;

public:
	Salgados();
	~Salgados();
	Salgados(float s, bool gt, bool lt);

	float getQtdSodio();
	bool getGluten();
	bool getLactose();

	void setQtdSodio(float s);
	void setGluten(bool gt);
	void setLactose(bool lt);
};

#endif
#ifndef DOCES_H
#define DOCES_H

#include "produtos.h"

class Doces : public Produtos {
private:
	float qtdAcucar;
	bool gluten;
	bool lactose;

public:
	Doces();
	~Doces();
	Doces(float a, bool gt, bool lt);

	float getQtdAcucar();
	bool getGluten();
	bool getLactose();

	void setQtdAcucar(float a);
	void setGluten(bool gt);
	void setLactose(bool lt);
};

#endif
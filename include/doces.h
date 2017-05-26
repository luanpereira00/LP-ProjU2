#ifndef DOCES_H
#define DOCES_H

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

class Doces : public Produtos, Pereciveis {
private:
	float qtdAcucar;
	bool gluten;
	bool lactose;

public:
	Doces();
	~Doces();
	Doces(int c, string n, float p, int e, float a, bool gt, bool lt, Data dv);

	float getQtdAcucar();
	bool getGluten();
	bool getLactose();

	void setQtdAcucar(float a);
	void setGluten(bool gt);
	void setLactose(bool lt);

	friend ostream& operator<<(ostream& os, Doces &a);
	friend istream& operator>>(istream& is, Doces &a);
};

#endif
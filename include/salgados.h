#ifndef SALGADOS_H
#define SALGADOS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

class Salgados : public Produtos, public Pereciveis {
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

	friend ostream& operator<<(ostream& os, Salgados &a);
	friend istream& operator>>(istream& is, Salgados &a);
};

#endif
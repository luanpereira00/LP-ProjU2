#ifndef FRUTAS_H
#define FRUTAS_H

#include <string>
using std::string;

#include "data.h"
#include "produtos.h"

class Frutas : public Produtos{
private:
	string lote;
	Data dataDeLote;

public: 
	Frutas();
	~Frutas();
	Frutas(int c, string n, float p, int e, string l, Data d);

	string getLote();
	Data getDataLote();

	void setLote(string l);
	void setDataLote(Data d);
};

#endif
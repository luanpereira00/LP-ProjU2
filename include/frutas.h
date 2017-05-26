#ifndef FRUTAS_H
#define FRUTAS_H

#include <string>
using std::string;

#include "produtos.h"
#include "data.h"

class Frutas : public Produtos{
private:
	string lote;
	Data dataDeLote;

public: 
	Frutas();
	~Frutas();
	Frutas(int c, string n, float p, int e, string l, Data dl);

	string getLote();
	Data getDataLote();

	void setLote(string l);
	void setDataLote(Data dl);
};

#endif
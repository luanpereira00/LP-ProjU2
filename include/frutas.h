#ifndef FRUTAS_H
#define FRUTAS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

class Frutas : public Produtos, public Pereciveis {
private:
	string lote;
	Data dataDeLote;

public:
	Frutas();
	~Frutas();
	Frutas(int c, string n, float p, int e, string lt, Data dl, Data dv);

	string getLote();
	Data* getDataLote();

	void setLote(string lt);
	void setDataLote(Data dl);

	friend ostream& operator<<(ostream& os, Frutas &a);
	friend istream& operator>>(istream& is, Frutas &a);
};

#endif
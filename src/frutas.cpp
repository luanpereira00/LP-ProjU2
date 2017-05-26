#include <string>
using std::string;

#include "frutas.h"

Frutas::Frutas(){
	Data dl;
	setLote("");
	setDataLote(dl);
}
Frutas::~Frutas(){
	//FAZ NADA
}
Frutas::Frutas(int c, string n, float p, int e, string l, Data dl){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setLote(l);
	setDataLote(dl);
}

string Frutas::getLote(){ return lote; }
Data Frutas::getDataLote(){ return dataDeLote; }

void Frutas::setLote(string l){ lote = l; }
void Frutas::setDataLote(Data dl){ dataDeLote = dl; }
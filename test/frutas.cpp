#include <string>
using std::string;

#include "frutas.h"
#include "data.h"

Frutas::Frutas(){
	Data d();
	setLote("");
	setDataLote(d);
}
Frutas::~Frutas(){
	//FAZ NADA
}
Frutas::Frutas(int c, string n, float p, int e, string l, Data d){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);
	setLote(l);
	setDataLote(d);
}

string Frutas::getLote(){ return lote; }
Data Frutas::getDataLote(){ return dataDeLote; }

void Frutas::setLote(string l){ lote = l; }
void Frutas::setDataLote(Data d){ dataDeLote = d; }
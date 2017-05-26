#include "frutas.h"
#include "data.h"

Frutas::Frutas(){
	Data d;
	setLote("");
	setDataLote(d);
	setValidade(d);
}
Frutas::~Frutas(){
	//FAZ NADA
}
Frutas::Frutas(int c, string n, float p, int e, string lt, Data dl, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setLote(lt);
	setDataLote(dl);

	setValidade(dv);
}

string Frutas::getLote(){ return lote; }
Data Frutas::getDataLote(){ return dataDeLote; }

void Frutas::setLote(string lt){ lote = lt; }
void Frutas::setDataLote(Data dl){ dataDeLote = dl; }
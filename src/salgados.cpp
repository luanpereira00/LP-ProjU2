#include "salgados.h"
#include "data.h"

Salgados::Salgados(){
	setQtdSodio(0);
	setGluten(false);
	setLactose(false);
}
Salgados::~Salgados(){
	//FAZ NADA
}
Salgados::Salgados(int c, string n, float p, int e, float s, bool gt, bool lt, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setQtdSodio(s);
	setGluten(gt);
	setLactose(lt);

	setValidade(dv);
}

float Salgados::getQtdSodio(){ return qtdSodio; }
bool Salgados::getGluten(){ return gluten; }
bool Salgados::getLactose(){ return lactose; }

void Salgados::setQtdSodio(float s){ qtdSodio = s; }
void Salgados::setGluten(bool gt){ gluten = gt; }
void Salgados::setLactose(bool lt){ lactose = lt; }
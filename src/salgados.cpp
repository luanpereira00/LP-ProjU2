#include "salgados.h"

Salgados::Salgados(){
	setQtdSodio(0);
	setGluten(false);
	setLactose(false);
}
Salgados::~Salgados(){
	//FAZ NADA
}
Salgados::Salgados(float s, bool gt, bool lt){
	setQtdSodio(s);
	setGluten(gt);
	setLactose(lt);
}

float Salgados::getQtdSodio(){ return qtdSodio; }
bool Salgados::getGluten(){ return gluten; }
bool Salgados::getLactose(){ return lactose; }

void Salgados::setQtdSodio(float s){ qtdSodio = s; }
void Salgados::setGluten(bool gt){ gluten = gt; }
void Salgados::setLactose(bool lt){ lactose = lt; }
#include "doces.h"
#include "data.h"

Doces::Doces(){
	setQtdAcucar(0);
	setGluten(false);
	setLactose(false);
}
Doces::~Doces(){
	//FAZ NADA
}
Doces::Doces(int c, string n, float p, int e, float a, bool gt, bool lt, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setQtdAcucar(a);
	setGluten(gt);
	setLactose(lt);
	
	setValidade(dv);
}

float Doces::getQtdAcucar(){ return qtdAcucar; }
bool Doces::getGluten(){ return gluten; }
bool Doces::getLactose(){ return lactose; }

void Doces::setQtdAcucar(float a){ qtdAcucar = a; }
void Doces::setGluten(bool gt){ gluten = gt; }
void Doces::setLactose(bool lt){ lactose = lt; }
#include "doces.h"

Doces::Doces(){
	setQtdAcucar(0);
	setGluten(false);
	setLactose(false);
}
Doces::~Doces(){
	//FAZ NADA
}
Doces::Doces(float a, bool gt, bool lt){
	setQtdAcucar(a);
	setGluten(gt);
	setLactose(lt);
}

float Doces::getQtdAcucar(){ return qtdAcucar; }
bool Doces::getGluten(){ return gluten; }
bool Doces::getLactose(){ return lactose; }

void Doces::setQtdAcucar(float a){ qtdAcucar = a; }
void Doces::setGluten(bool gt){ gluten = gt; }
void Doces::setLactose(bool lt){ lactose = lt; }
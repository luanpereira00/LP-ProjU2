#include <string>
using std::string;

#include "bebidas.h"

Bebidas::Bebidas(){
	setTeorAlcoolico(0.0);
	setQtdAcucar(0.0);
	setVolumeTotal(0);
}
Bebidas::~Bebidas(){
	//FAZ NADA
}
Bebidas::Bebidas(int c, string n, float p, int e, float t, float a, int v){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);
	setTeorAlcoolico(t);
	setQtdAcucar(a);
	setVolumeTotal(v);
}

float Bebidas::getTeorAlcoolico(){ return teorAlcoolico; }
float Bebidas::getQtdAcucar(){ return qtdAcucar; }
int Bebidas::getVolumeTotal(){ return volumeTotal; }

void Bebidas::setTeorAlcoolico(float t){ teorAlcoolico = t; }
void Bebidas::setQtdAcucar(float a){ qtdAcucar = a; }
void Bebidas::setVolumeTotal(int v){ volumeTotal = v; }


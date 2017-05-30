#ifndef BEBIDAS_H
#define BEBIDAS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "produtos.h"

class Bebidas : public Produtos{
private:
	float teorAlcoolico;
	float qtdAcucar;
	int volumeTotal; //litragem

public:
	Bebidas();
	~Bebidas();
	Bebidas(int c, string n, float p, int e, float t, float a, int v);

	float getTeorAlcoolico();
	float getQtdAcucar();
	int getVolumeTotal();

	void setTeorAlcoolico(float t);
	void setQtdAcucar(float a);
	void setVolumeTotal(int v);

	Bebidas& operator=(int a);
	friend ostream& operator<<(ostream& os, Bebidas &a);
	friend istream& operator>>(istream& is, Bebidas &a);
};

#endif
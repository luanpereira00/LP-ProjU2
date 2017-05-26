#ifndef DVDS_H
#define DVDS_H

#include <string>
using std::string;

#include "produtos.h"

class DVDs : public Produtos {
private:	
	string titulo;
	string genero;
	int minutos;

public:
	DVDs();
	~DVDs();
	DVDs(string tt, string gr, int min);
	
	string getTitulo();
	string getGenero();
	int getMinutos();

	void setTitulo(string tt);
	void setGenero(string gr);
	void setMinutos(int min);

	friend ostream& operator<<(ostream& os, DVDs &a);
	friend istream& operator>>(istream& is, DVDs &a);
};

#endif
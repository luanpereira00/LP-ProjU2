#ifndef LIVROS_H
#define LIVROS_H

#include <string>
using std::string;

#include "produtos.h"

class Livros : public Produtos {
private:
	string titulo;
	string autor;
	string editora;
	int anoLancamento;

public:
	Livros();
	~Livros();
	Livros(string tt, string at, string ed, int aa);

	string getTitulo();
	string getAutor();
	string getEditora();
	int getAno();

	void setTitulo(string tt);
	void setAutor(string at);
	void setEditora(string ed);
	void setAno(int aa);

	friend ostream& operator<<(ostream& os, Livros &a);
	friend istream& operator>>(istream& is, Livros &a);
};

#endif
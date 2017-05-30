#ifndef CDS_H
#define CDS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "produtos.h"

class CDs : public Produtos {
private:
	string nomeDoAlbum;
	string estilo;
	string artista;

public:
	CDs();
	~CDs();
	CDs(int c, string n, float p, int e, string a, string es, string t);

	string getAlbum();
	string getEstilo();
	string getArtista();

	void setAlbum(string a);
	void setEstilo(string es);
	void setArtista(string t);

	friend ostream& operator<<(ostream& os, CDs &a);
	friend istream& operator>>(istream& is, CDs &a);
};

#endif
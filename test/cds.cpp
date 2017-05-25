#include <string>
using std::string;

#include "cds.h"

CDs::CDs(){
	setAlbum("");
	setEstilo("");
	setArtista("");
}
CDs::~CDs(){
	//FAZ NADA
}
CDs::CDs(int c, string n, float p, int e, string a, string es, string t){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);
	setAlbum(a);
	setEstilo(es);
	setArtista(t);
}

string CDs::getAlbum(){ return nomeDoAlbum; }
string CDs::getEstilo(){ return estilo; }
string CDs::getArtista(){ return artista; }

void CDs::setAlbum(string a){ nomeDoAlbum = a; }
void CDs::setEstilo(string es){ estilo = es; }
void CDs::setArtista(string t){ artista = t; }
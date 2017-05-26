#include <string>
using std::string;

#include "dvds.h"

DVDs::DVDs(){
	setTitulo("");
	setGenero("");
	setMinutos(0);
}
DVDs::~DVDs(){
	//FAZ NADA
}
DVDs::DVDs(string tt, string gr, int min){
	setTitulo(tt);
	setGenero(gr);
	setMinutos(min);
}

string DVDs::getTitulo(){ return titulo; }
string DVDs::getGenero(){ return genero; }
int DVDs::getMinutos(){ return minutos; }

void DVDs::setTitulo(string tt){ titulo = tt; }
void DVDs::setGenero(string gr){ genero = gr; }
void DVDs::setMinutos(int min){ minutos = min; }
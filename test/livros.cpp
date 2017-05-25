#include <string>
using std::string;

#include livros.h

Livros::Livros(){
	setTitulo("");
	setAutor("");
	setEditora("");
	setAno(1900);
}
Livros::~Livros(){
	//FAZ NADA
}
Livros::Livros(string tt, string at, string ed, int aa){
	setTitulo(tt);
	setAutor(at);
	setEditora(ed);
	setAno(aa);
}

string Livros::getTitulo(){ return titulo; }
string Livros::getAutor(){ return autor; }
string Livros::getEditora(){ return editora; }
int Livros::getAno(){ return ano; }

void Livros::setTitulo(string tt){ titulo = tt; }
void Livros::setAutor(string at){ autor = at; }
void Livros::setEditora(string ed){ editora = ed; }
void Livros::setAno(int aa){ ano = aa; }
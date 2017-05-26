#include <iostream>
using std::getline;

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "livros.h"

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
int Livros::getAno(){ return anoLancamento; }

void Livros::setTitulo(string tt){ titulo = tt; }
void Livros::setAutor(string at){ autor = at; }
void Livros::setEditora(string ed){ editora = ed; }
void Livros::setAno(int aa){ anoLancamento = aa; }

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar um CD na formatacao "codigo;nome;preco;qtdEstoque;album,estilo,artista"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto CDs a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, Livros &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getTitulo() << ";"; 	
	os << a.getAutor() << ";";
	os << a.getEditora() << ";";
	os << a.getAno();
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto CDs a ser criado com base nos  
*			valores fornecidos  
* @return	Referencia para stream de entrada  
*/ 	
istream& operator>>(istream& is, Livros &a){
	string aux; 

	getline(is, aux, ';'); 	
	a.setChave(atoi(aux.c_str())); 	
	getline(is, aux, ';'); 	
	a.setNomeProd(aux); 	
	getline(is, aux, ';'); 	
	a.setPrecoUnit(atof(aux.c_str()));
	getline(is, aux);
	a.setQtdEstoque(atoi(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setTitulo(aux); 
	getline(is, aux, ';'); 	
	a.setAutor(aux);
	getline(is, aux, ';'); 	
	a.setEditora(aux);
	getline(is, aux);
	a.setAno(atoi(aux.c_str()));
	
	// << aux;
	//a.setValidade();

	return is; 
}
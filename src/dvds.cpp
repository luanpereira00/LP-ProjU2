#include <iostream>
using std::getline;

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

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
void DVDs::setMinutos(int min){ minutos = min; } //duracao

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar um DVDs na formatacao "codigo;nome;preco;qtdEstoque;titulo;genero;duracao"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto DVDs a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, DVDs &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getTitulo() << ";"; 	
	os << a.getGenero() << ";";
	os << a.getMinutos();
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto CDs a ser criado com base nos  
*			valores fornecidos  * @return	Referencia para stream de entrada  
*/ 	
istream& operator>>(istream& is, DVDs &a){
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
	a.setGenero(aux);
	getline(is, aux); 	
	a.setMinutos(atoi(aux.c_str()));
	
	// << aux;
	//a.setValidade();

	return is; 
}
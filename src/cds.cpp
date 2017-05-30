#include <iostream>
using std::getline;

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

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

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar um CD na formatacao "codigo;nome;preco;qtdEstoque;album,estilo,artista"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto CDs a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, CDs &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getAlbum() << ";"; 	
	os << a.getEstilo() << ";";
	os << a.getArtista();
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto CDs a ser criado com base nos  
*			valores fornecidos  * @return	Referencia para stream de entrada  
*/ 	
istream& operator>>(istream& is, CDs &a){
	string aux; 

	getline(is, aux, ';'); 	
	a.setChave(atoi(aux.c_str())); 	
	getline(is, aux, ';'); 	
	a.setNomeProd(aux); 	
	getline(is, aux, ';'); 	
	a.setPrecoUnit(atof(aux.c_str()));
	getline(is, aux, ';');
	a.setQtdEstoque(atoi(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setAlbum(aux); 
	getline(is, aux, ';'); 	
	a.setEstilo(aux);
	getline(is, aux); 	
	a.setArtista(aux);
	
	// << aux;
	//a.setValidade();

	return is; 
}
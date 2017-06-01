/**
 * @file	cds.cpp
 * @brief	Implementacao da classe CDs para representar produtos do tipo CD
 * @details Os atributos de um CD sao o nomeDoAlbum, o estilo e o artista
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::getline;

#include "cds.h"

/**@brief Construtor padrao*/
CDs::CDs(){
	setAlbum("");
	setEstilo("");
	setArtista("");
}

/**@brief Destrutor padrao*/
CDs::~CDs(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
CDs::CDs(int c, string n, float p, int e, string a, string es, string t){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);
	setAlbum(a);
	setEstilo(es);
	setArtista(t);
}

/**@return Retorna o nome do album*/
string CDs::getAlbum(){ return nomeDoAlbum; }

/**@return Retorna o estilo musical*/
string CDs::getEstilo(){ return estilo; }

/**@return Retorna o nome do artista*/
string CDs::getArtista(){ return artista; }

/**@brief Atualiza o nome do album
	*@param a O novo nome do album*/
void CDs::setAlbum(string a){ nomeDoAlbum = a; }

/**@brief Atualiza o estilo musical
	*@param es O novo estilo musical*/
void CDs::setEstilo(string es){ estilo = es; }

/**@brief Atualiza o nome do artista
	*@param O novo nome do artista*/
void CDs::setArtista(string t){ artista = t; }

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar um CD na formatacao "codigo;nome;preco;qtdEstoque;nomeDoAlbum;estilo;nomeDoArtista"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto CD a ser impresso  
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
* @param	a Referencia para o objeto CD a ser criado com base nos  
*			valores fornecidos  
* @return	Referencia para stream de entrada  
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
	return is; 
}
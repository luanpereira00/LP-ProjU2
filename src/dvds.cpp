/**
 * @file	dvds.cpp
 * @brief	Definicao da classe DVDs para representar produtos do tipo DVD
 * @details Os atributos de um DVD sao o titulo, o genero e a duracao em minutos
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::getline;

#include "dvds.h"

/**@brief Construtor padrao*/
DVDs::DVDs(){
	setTitulo("");
	setGenero("");
	setMinutos(0);
}

/**@brief Destrutor padrao*/
DVDs::~DVDs(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
DVDs::DVDs(string tt, string gr, int min){
	setTitulo(tt);
	setGenero(gr);
	setMinutos(min);
}

/**@return Retorna o titulo do DVD*/
string DVDs::getTitulo(){ return titulo; }

/**@return Retorna o genero do DVD*/
string DVDs::getGenero(){ return genero; }

/**@return Retorna a duracao em minutos do DVD*/
int DVDs::getMinutos(){ return minutos; }

/**@brief Atualiza o titulo
	*@param tt O novo titulo */
void DVDs::setTitulo(string tt){ titulo = tt; }

/**@brief Atualiza o genero
	*@param gr O novo genero */
void DVDs::setGenero(string gr){ genero = gr; }

/**@brief Atualiza a duracao em minutos
	*@param min A nova duracao */
void DVDs::setMinutos(int min){ minutos = min; } //duracao

/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar uma DVD na formatacao "codigo;nome;preco;qtdEstoque;titulo;genero;duracao"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto DVD a ser impresso  
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
	* @param	a Referencia para o objeto DVD a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
istream& operator>>(istream& is, DVDs &a){
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
	a.setTitulo(aux); 
	getline(is, aux, ';'); 	
	a.setGenero(aux);
	getline(is, aux); 	
	a.setMinutos(atoi(aux.c_str()));
	return is; 
}
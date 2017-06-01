/**
 * @file	livros.cpp
 * @brief	Implementacao da classe Livros
 * @details Os atributos de um Livro sao o titulo, o autor, a editora e o ano de lancamento
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::getline;

#include "livros.h"

/**@brief Construtor padrao*/
Livros::Livros(){
	setTitulo("");
	setAutor("");
	setEditora("");
	setAno(1900);
}

/**@brief Destrutor padrao*/
Livros::~Livros(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
Livros::Livros(string tt, string at, string ed, int aa){
	setTitulo(tt);
	setAutor(at);
	setEditora(ed);
	setAno(aa);
}

/**@return Retorna o titulo*/
string Livros::getTitulo(){ return titulo; }

/**@return Retorna o autor*/
string Livros::getAutor(){ return autor; }

/**@return Retorna a editora */
string Livros::getEditora(){ return editora; }

/**@return Retorna o ano de lancamento*/
int Livros::getAno(){ return anoLancamento; }

/**@brief Atualiza o titulo
	*@param tt O novo titulo */
void Livros::setTitulo(string tt){ titulo = tt; }

/**@brief Atualiza o autor
	*@param at O novo autor*/
void Livros::setAutor(string at){ autor = at; }

/**@brief Atualiza a editora
	*@param ed A nova editora */
void Livros::setEditora(string ed){ editora = ed; }

/**@brief Atualiza o ano de lancamento
	*@param aa O novo ano de lancamento*/
void Livros::setAno(int aa){ anoLancamento = aa; }

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar um livro na formatacao "codigo;nome;preco;qtdEstoque;titulo;autor;editora;anoDeLancamento"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto livro a ser impresso  
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
* @param	a Referencia para o objeto livro a ser criado com base nos  
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
	getline(is, aux, ';');
	a.setQtdEstoque(atoi(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setTitulo(aux); 
	getline(is, aux, ';'); 	
	a.setAutor(aux);
	getline(is, aux, ';'); 	
	a.setEditora(aux);
	getline(is, aux);
	a.setAno(atoi(aux.c_str()));
	return is; 
}
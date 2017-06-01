/**
 * @file	livros.h
 * @brief	Definicao da classe Livros para representar produtos do tipo Livro
 * @details Os atributos de um Livro sao o titulo, o autor, a editora e o ano de lancamento
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef LIVROS_H
#define LIVROS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "produtos.h"

/** 
 * @class 	Bebidas bebidas.h
 * @brief 	Classe que representa Livros
 * @details Os atributos de um Livro sao o titulo, o autor, a editora e o ano de lancamento. Herda atributos e métodos de Produtos.
 */
class Livros : public Produtos {
private:
	string titulo; /**< O titulo*/
	string autor; /**< O autor*/
	string editora; /**< A editora*/
	int anoLancamento; /**< O ano de lancamento*/

public:
	/**@brief Construtor padrao*/
	Livros();

	/**@brief Destrutor padrao*/
	~Livros();

	/**@brief Construtor parametrizado*/
	Livros(string tt, string at, string ed, int aa);

	/**@return Retorna o titulo*/
	string getTitulo(); 

	/**@return Retorna o autor*/
	string getAutor();

	/**@return Retorna a editora */
	string getEditora();

	/**@return Retorna o ano de lancamento*/
	int getAno();

	/**@brief Atualiza o titulo
	*@param tt O novo titulo */
	void setTitulo(string tt);

	/**@brief Atualiza o autor
	*@param at O novo autor*/
	void setAutor(string at);

	/**@brief Atualiza a editora
	*@param ed A nova editora */
	void setEditora(string ed);

	/**@brief Atualiza o ano de lancamento
	*@param aa O novo ano de lancamento*/
	void setAno(int aa);

	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar um livro na formatacao "codigo;nome;preco;qtdEstoque;titulo;autor;editora;anoDeLancamento"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto livro a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, Livros &a);

	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto livro a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
	friend istream& operator>>(istream& is, Livros &a);
};

#endif
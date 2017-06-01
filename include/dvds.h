/**
 * @file	dvds.h
 * @brief	Definicao da classe DVDs para representar produtos do tipo DVD
 * @details Os atributos de um DVD sao o titulo, o genero e a duracao em minutos
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef DVDS_H
#define DVDS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "produtos.h"

/** 
 * @class 	DVDs dvds.h
 * @brief 	Classe que representa DVDs
 * @details Os atributos de um DVD sao o titulo, o genero e a duracao em minutos. Herda atributos e métodos de Produtos.
 */
class DVDs : public Produtos {
private:	
	string titulo; /**< O titulo*/
	string genero; /**< O genero*/
	int minutos; /**< A duracao em minutos*/

public:
	/**@brief Construtor padrao*/
	DVDs();

	/**@brief Destrutor padrao*/
	~DVDs();

	/**@brief Construtor parametrizado*/
	DVDs(string tt, string gr, int min);
	
	/**@return Retorna o titulo do DVD*/
	string getTitulo();

	/**@return Retorna o genero do DVD*/
	string getGenero();

	/**@return Retorna a duracao em minutos do DVD*/
	int getMinutos();

	/**@brief Atualiza o titulo
	*@param tt O novo titulo */
	void setTitulo(string tt);

	/**@brief Atualiza o genero
	*@param gr O novo genero */
	void setGenero(string gr);

	/**@brief Atualiza a duracao em minutos
	*@param min A nova duracao */
	void setMinutos(int min);

	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar uma DVD na formatacao "codigo;nome;preco;qtdEstoque;titulo;genero;duracao"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto DVD a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, DVDs &a);

	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto DVD a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
	friend istream& operator>>(istream& is, DVDs &a);
};

#endif
/**
 * @file	salgados.h
 * @brief	Definicao da classe Salgados para representar produtos do tipo Salgado
 * @details Os atributos de um Salgado sao a qtdSodio, ter gluten, ter lactose
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef SALGADOS_H
#define SALGADOS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

/** 
 * @class 	Salgados salgados.h
 * @brief 	Classe que representa Salgados
 * @details Os atributos de um Salgado sao a qtdSodio, ter gluten, ter lactose. Herda atributos e métodos de Produtos e Pereciveis.
 */
class Salgados : public Produtos, public Pereciveis {
private:
	float qtdSodio; /**< A quantidade de sodio*/
	bool gluten; /**< Informacao sobre conter gluten*/
	bool lactose; /**< Informacao sobre conter lactose*/

public:
	/**@brief Construtor padrao*/
	Salgados();

	/**@brief Destrutor padrao*/
	~Salgados();

	/**@brief Construtor parametrizado*/
	Salgados(int c, string n, float p, int e, float s, bool gt, bool lt, Data dv);

	/**@return Retorna a quantidade de sodio*/
	float getQtdSodio();

	/**@return Retorna bool para ter gluten */
	bool getGluten();

	/**@return Retorna bool para ter lactose */
	bool getLactose();

	/**@brief Atualiza a quantidade de sodio
	*@param s A nova quantidade de sodio*/
	void setQtdSodio(float s);

	/**@brief Atualiza a informacao sobre gluten
	*@param gt A informacao para atualizar */
	void setGluten(bool gt);

	/**@brief Atualiza a informacao sobre lactose
	*@param lt A informacao para atualizar */
	void setLactose(bool lt);

	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar um salgado na formatacao "codigo;nome;preco;qtdEstoque;qtdSodio;gluten;lactose;dataDeValidade"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto salgado a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, Salgados &a);

	
	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto salgado a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
	friend istream& operator>>(istream& is, Salgados &a);
};

#endif
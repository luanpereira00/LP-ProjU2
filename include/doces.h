/**
 * @file	doces.h
 * @brief	Definicao da classe Doces para representar produtos do tipo Doce
 * @details Os atributos de um Doce sao a qtdAcucar, ter gluten, ter lactose
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef DOCES_H
#define DOCES_H

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

/** 
 * @class 	Doces doces.h
 * @brief 	Classe que representa Doces
 * @details Os atributos de um Doce sao a qtdAcucar, ter gluten, ter lactose. Herda atributos e métodos de Produtos e Pereciveis.
 */
class Doces : public Produtos, public Pereciveis {
private:
	float qtdAcucar; /**< A quantidade de acucar*/
	bool gluten; /**< Ter gluten*/
	bool lactose; /**< Ter lactose*/

public:
	/**@brief Construtor padrao*/
	Doces();

	/**@brief Destrutor padrao*/
	~Doces();

	/**@brief Construtor parametrizado*/
	Doces(int c, string n, float p, int e, float a, bool gt, bool lt, Data dv);

	/**@return Retorna a quantidade de acucar */
	float getQtdAcucar();

	/**@return Retorna bool para ter gluten */
	bool getGluten();

	/**@return Retorna bool para ter lactose */
	bool getLactose();

	/**@brief Atualiza a quantidade de acucar
	*@param a A nova quantidade de acucar*/
	void setQtdAcucar(float a);

	/**@brief Atualiza a informacao sobre gluten
	*@param gt A informacao para atualizar */
	void setGluten(bool gt);

	/**@brief Atualiza a informacao sobre lactose
	*@param lt A informacao para atualizar */
	void setLactose(bool lt);
	
	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar um doce na formatacao "codigo;nome;preco;qtdEstoque;qtdAcucar;gluten;lactose;dataDeValidade"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto doce a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, Doces &a);

	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto doce a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
	friend istream& operator>>(istream& is, Doces &a);
};

#endif
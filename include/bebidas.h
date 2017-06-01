/**
 * @file	bebidas.h
 * @brief	Definicao da classe Bebidas para representar produtos do tipo Bebida
 * @details Os atributos de uma Bebida sao o teorAlcoolico, a qtdAcucar, volumeTotal
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */
#ifndef BEBIDAS_H
#define BEBIDAS_H

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
 * @class 	Bebidas bebidas.h
 * @brief 	Classe que representa Bebidas
 * @details Os atributos de uma Bebida sao o teorAlcoolico, a qtdAcucar, volumeTotal. Herda atributos e métodos de Produtos e Pereciveis.
 */
class Bebidas : public Produtos, public Pereciveis {
private:
	float teorAlcoolico; /**< O teor alcoolico da bebida (em %)*/
	float qtdAcucar; /**< A quantidade de acucar da bebida (em mm)*/
	int volumeTotal; /**< O volume total da bebida (em ml)*/

public:
	/**@brief Construtor padrao*/
	Bebidas();

	/**@brief Destrutor padrao*/
	~Bebidas();

	/**@brief Construtor parametrizado*/
	Bebidas(int c, string n, float p, int e, float t, float a, int v, Data dv);

	/**@return Retorna o teor alcoolico */
	float getTeorAlcoolico();

	/**@return Retorna a quantidade de acucar */
	float getQtdAcucar();

	/**@return Retorna o volume total */
	int getVolumeTotal();

	/**@brief Atualiza o teor alcoolico
	*@param t O novo teor alcoolico */
	void setTeorAlcoolico(float t);

	/**@brief Atualiza a quantidade de acucar
	*@param a A nova quantidade de acucar*/
	void setQtdAcucar(float a);
	
	/**@brief Atualiza o volume total
	*@param v O novo volume total*/
	void setVolumeTotal(int v);

	/** @brief Sobrecarga do operador de atribuicao (para Bebidas)
	* @param	a Bebida que sera passado por atribuicao  
	* @return	Retorna a Bebida atribuida
	*/
	Bebidas& operator=(int a);

	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar uma bebida na formatacao "codigo;nome;preco;qtdEstoque;teorAlcoolico;qtdAcucar;volumeTotal;dataDeValidade"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto bebida a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, Bebidas &a);

	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto bebida a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
	friend istream& operator>>(istream& is, Bebidas &a);
};

#endif
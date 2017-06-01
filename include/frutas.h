/**
 * @file	frutas.h
 * @brief	Definicao da classe Frutas para representar produtos do tipo Frutas
 * @details Os atributos de uma Fruta sao o lote e a data da lote
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */
#ifndef FRUTAS_H
#define FRUTAS_H

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
 * @class 	Frutas frutas.h
 * @brief 	Classe que representa Frutas
 * @details Os atributos de uma Fruta sao o lote e a data da lote. Herda atributos e métodos de Produtos e Pereciveis.
 */
class Frutas : public Produtos, public Pereciveis {
private:
	string lote; /**< O lote */
	Data dataDeLote; /**< A data do lote */

public:
	/**@brief Construtor padrao*/
	Frutas();

	/**@brief Destrutor padrao*/
	~Frutas();

	/**@brief Construtor parametrizado*/
	Frutas(int c, string n, float p, int e, string lt, Data dl, Data dv);

	/**@return Retorna o lote */
	string getLote();

	/**@return Retorna a data do lote */
	Data* getDataLote();

	/**@brief Atualiza o lote
	*@param lt O novo lote */
	void setLote(string lt);

	/**@brief Atualiza a data do lote
	*@param dl A nova data */ 
	void setDataLote(Data dl);

	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar uma fruta na formatacao "codigo;nome;preco;qtdEstoque;lote;dataDeLote;dataDeValidade"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto fruta a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, Frutas &a);

	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto fruta a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 
	friend istream& operator>>(istream& is, Frutas &a);
};

#endif
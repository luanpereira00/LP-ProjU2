/**
 * @file	produtos.h
 * @brief	Definicao da classe mae Produtos para representar um produto
 * @details Os atributos de um produto sao a chave, o nome do produto, o preco unitario e a quantidade em estoque;
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */
#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <string>
using std::string;

/** 
 * @class 	Produtos produtos.h
 * @brief 	Classe que representa Produtos
 * @details O atributo de um produto sao a chave, o nome do produto, o preco unitario e a quantidade em estoque;
 */
class Produtos{
protected: 
	int chave; /**< A chave primaria associada ao produto*/
	string nomeProduto; /**< O nome do produto*/
	float precoUnitario; /**< O preco unitario*/
	int qtdEstoque; /**< A quantidade em estoque*/

public:
	/**@brief Construtor padrao*/
	Produtos();

	/**@brief Destrutor padrao*/
	~Produtos();

	/**@brief Construtor parametrizado*/
	Produtos(int c, string n, float p, int e);

	/**@return Retorna a chave */
	int getChave();

	/**@return Retorna o nome do produto*/
	string getNomeProd();

	/**@return Retorna o preco unitario*/
	float getPrecoUnit();

	/**@return A quantidade em estoque*/
	int getQtdEstoque();

	/**@brief Atualiza a chave
	*@param c A nova chave*/
	void setChave(int c);

	/**@brief Atualiza o nome
	*@param n O novo nome*/
	void setNomeProd(string n);

	/**@brief Atualiza o preco unitario
	*@param p O novo preco*/
	void setPrecoUnit(float p);

	void imprimirTela();

	/**@brief Atualiza a quantidade em estoque
	*@param e A nova quantidade*/
	void setQtdEstoque(int e);

	/** @brief Sobrecarga do operador de menor (para Produtos)
	* @param	p Produdo que sera comparado  
	* @return	Retorna bool a relacao
	*/
	bool operator<(Produtos p);
};

#endif
/**
 * @file	produtos.cpp
 * @brief	Implementacoes da classe mae Produtos
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include "produtos.h"

/**@brief Construtor padrao*/
Produtos::Produtos(){ 
	setChave(0);
	setNomeProd("");
	setPrecoUnit(0);
	setQtdEstoque(0);
}

/**@brief Destrutor padrao*/
Produtos::~Produtos(){
	//Faz Nada
}

/**@brief Construtor parametrizado*/
Produtos::Produtos(int c, string n, float p, int e){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);
}

/**@return Retorna a chave */
int Produtos::getChave(){ return chave; }

/**@return Retorna o nome do produto*/
string Produtos::getNomeProd(){ return nomeProduto; }

/**@return Retorna o preco unitario*/
float Produtos::getPrecoUnit(){ return precoUnitario; }

/**@return A quantidade em estoque*/
int Produtos::getQtdEstoque(){ return qtdEstoque; }

/**@brief Atualiza a chave
	*@param c A nova chave*/
void Produtos::setChave(int c) { chave = c; }

/**@brief Atualiza o nome
	*@param n O novo nome*/
void Produtos::setNomeProd(string n){ nomeProduto = n; }

/**@brief Atualiza o preco unitario
	*@param p O novo preco*/
void Produtos::setPrecoUnit(float p){ precoUnitario = p; }

/**@brief Atualiza a quantidade em estoque
	*@param e A nova quantidade*/
void Produtos::setQtdEstoque(int e){ qtdEstoque = e; }


/** @brief Sobrecarga do operador de menor (para Produtos)
* @param	p Produdo que sera comparado  
* @return	Retorna bool a relacao
*/
bool Produtos::operator<(Produtos p) {
	if(chave<p.chave) return true;
	else return false;
}

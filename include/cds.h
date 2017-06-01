/**
 * @file	cds.h
 * @brief	Definicao da classe CDs para representar produtos do tipo CD
 * @details Os atributos de um CD sao o nomeDoAlbum, o estilo e o artista
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef CDS_H
#define CDS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "produtos.h"

/** 
 * @class 	CDs cds.h
 * @brief 	Classe que representa CDs
 * @details Os atributos de um CD sao o nomeDoAlbum, o estilo e o artista. Herda atributos e métodos de Produtos.
 */
class CDs : public Produtos {
private:
	string nomeDoAlbum; /**< O nome do album do CD*/
	string estilo; /**< O estilo de musica do CD*/
	string artista; /**< O artista do CD*/

public:
	/**@brief Construtor padrao*/
	CDs();

	/**@brief Destrutor padrao*/
	~CDs();

	/**@brief Construtor parametrizado*/
	CDs(int c, string n, float p, int e, string a, string es, string t);

	/**@return Retorna o nome do album*/
	string getAlbum();

	/**@return Retorna o estilo musical*/
	string getEstilo();

	/**@return Retorna o nome do artista*/
	string getArtista();

	/**@brief Atualiza o nome do album
	*@param a O novo nome do album*/
	void setAlbum(string a);

	/**@brief Atualiza o estilo musical
	*@param es O novo estilo musical*/
	void setEstilo(string es);
	
	/**@brief Atualiza o nome do artista
	*@param O novo nome do artista*/
	void setArtista(string t);

	/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar um CD na formatacao "codigo;nome;preco;qtdEstoque;nomeDoAlbum;estilo;nomeDoArtista"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto CD a ser impresso  
	* @return	Referencia para stream de saida  
	*/
	friend ostream& operator<<(ostream& os, CDs &a);

	/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto CD a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/ 	
	friend istream& operator>>(istream& is, CDs &a);
};

#endif
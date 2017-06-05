/**
 * @file	estoque.h
 * @brief	Declaracao da classe Estoque para representar um estoque de produtos
 * @details Os atributos de um Estoque sao as listas de produtos e ultima chave primaria associada
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "lista.h"

#include "bebidas.h"
#include "cds.h"
#include "doces.h"
#include "dvds.h"
#include "frutas.h"
#include "livros.h"
#include "salgados.h"

/** 
 * @class 	Estoque estoque.h
 * @brief 	Classe que representa Estoque
 */
class Estoque {
private:
	lista<Bebidas>* ll_Bebidas; /**< A lista de bebidas*/
	lista<CDs>* ll_CDs; /**< A lista de cds*/
	lista<Doces>* ll_Doces; /**< A lista de doces*/
	lista<DVDs>* ll_DVDs; /**< A lista de dvds*/
	lista<Frutas>* ll_Frutas; /**< A lista de frutas*/
	lista<Livros>* ll_Livros; /**< A lista de livros*/
	lista<Salgados>* ll_Salgados; /**< A lista de salgados*/
	int ultimaChave;
	
public:
	/**@brief Construtor padrao*/
	Estoque();

	/**@brief Destrutor padrao*/
	~Estoque();

	/**@return Retorna a lista de bebidas */
	lista<Bebidas>* getListaBebidas();

	/**@return Retorna a lista de cds */
	lista<CDs>* getListaCDs();

	/**@return Retorna a lista de doces */
	lista<Doces>* getListaDoces();

	/**@return Retorna a lista de dvds */
	lista<DVDs>* getListaDVDs();

	/**@return Retorna a lista de frutas */
	lista<Frutas>* getListaFrutas();

	/**@return Retorna a lista de livros */
	lista<Livros>* getListaLivros();

	/**@return Retorna a lista de salgados */
	lista<Salgados>* getListaSalgados();

	/**@return Retorna a ultima chave associada */
	int getLastKey();

	/**@brief Atualiza a ultima chave associada */
	void setLastKey(int a);

	/**@brief Atualiza a lista de bebidas */
	void setListaBebidas(lista<Bebidas>* ll);

	/**@brief Atualiza a lista de cds */
	void setListaCDs(lista<CDs>* ll);

	/**@brief Atualiza a lista de doces */
	void setListaDoces(lista<Doces>* ll);

	/**@brief Atualiza a lista de dvds */
	void setListaDVDs(lista<DVDs>* ll);

	/**@brief Atualiza a lista de frutas */
	void setListaFrutas(lista<Frutas>* ll);

	/**@brief Atualiza a lista de livros */
	void setListaLivros(lista<Livros>* ll);

	/**@brief Atualiza a lista de salgados */
	void setListaSalgados(lista<Salgados>* ll);

	/**@brief Lista todo o estoque  */
	void listarEstoque();

	/**@brief Le os dados da memoria para inicializar o estoque  */
	void lerDados();

	/**@brief Pega a maior chave associada ao produtos do estoque  */
	int getMaxKey();

	/**@brief Grava os dados do estoque na memoria  */
	void gravarDados();

};

#endif
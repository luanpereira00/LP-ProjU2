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
	ostream& print(ostream& os){
		os << getTipo() << ";";
		os << getChave() << ";"; 	
		os << getNomeProd() << ";"; 	
		os << getPrecoUnit() << ";";
		os << getQtdEstoque() << ";";
		os << getAlbum() << ";"; 	
		os << getEstilo() << ";";
		os << getArtista();
		return os; 
	};

	istream& read(istream& is){
		string aux; 

		getline(is, aux, ';'); 	
		setChave(atoi(aux.c_str())); 	
		getline(is, aux, ';'); 	
		setNomeProd(aux); 	
		getline(is, aux, ';'); 	
		setPrecoUnit(atof(aux.c_str()));
		getline(is, aux, ';');
		setQtdEstoque(atoi(aux.c_str())); 
		getline(is, aux, ';'); 	
		setAlbum(aux); 
		getline(is, aux, ';'); 	
		setEstilo(aux);
		getline(is, aux); 	
		setArtista(aux);
		return is; 
	};

public:
	/**@brief Construtor padrao*/
	CDs();

	/**@brief Destrutor padrao*/
	~CDs();

	/**@brief Construtor parametrizado*/
	CDs(int c, string n, float p, int e, string a, string es, string t);

	CDs(CDs &a);

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

	void criar(int key);

};

#endif
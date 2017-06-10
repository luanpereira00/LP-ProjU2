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
	ostream& print(ostream& os){
		os << getTipo() << ";";
		os << getChave() << ";"; 	
		os << getNomeProd() << ";"; 	
		os << getPrecoUnit() << ";";
		os << getQtdEstoque() << ";";
		os << getTitulo() << ";"; 	
		os << getGenero() << ";";
		os << getDuracao();
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
		setTitulo(aux); 
		getline(is, aux, ';'); 	
		setGenero(aux);
		getline(is, aux); 	
		setDuracao(atoi(aux.c_str()));
		return is; 
	};

public:
	/**@brief Construtor padrao*/
	DVDs();

	/**@brief Destrutor padrao*/
	~DVDs();

	/**@brief Construtor parametrizado*/
	DVDs(int c, string n, float p, int e, string tt, string gr, int min);
	
	DVDs(DVDs &a);

	/**@return Retorna o titulo do DVD*/
	string getTitulo();

	/**@return Retorna o genero do DVD*/
	string getGenero();

	/**@return Retorna a duracao em minutos do DVD*/
	int getDuracao();

	/**@brief Atualiza o titulo
	*@param tt O novo titulo */
	void setTitulo(string tt);

	/**@brief Atualiza o genero
	*@param gr O novo genero */
	void setGenero(string gr);

	/**@brief Atualiza a duracao em minutos
	*@param min A nova duracao */
	void setDuracao(int min);

	void criar(int key);

};

#endif
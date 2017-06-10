/**
 * @file	livros.h
 * @brief	Definicao da classe Livros para representar produtos do tipo Livro
 * @details Os atributos de um Livro sao o titulo, o autor, a editora e o ano de lancamento
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef LIVROS_H
#define LIVROS_H

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include "produtos.h"

/** 
 * @class 	Bebidas bebidas.h
 * @brief 	Classe que representa Livros
 * @details Os atributos de um Livro sao o titulo, o autor, a editora e o ano de lancamento. Herda atributos e métodos de Produtos.
 */
class Livros : public Produtos {
private:
	string titulo; /**< O titulo*/
	string autor; /**< O autor*/
	string editora; /**< A editora*/
	int anoLancamento; /**< O ano de lancamento*/
	ostream& print(ostream& os){
		os << getTipo() << ";";
		os << getChave() << ";"; 	
		os << getNomeProd() << ";"; 	
		os << getPrecoUnit() << ";";
		os << getQtdEstoque() << ";";
		os << getTitulo() << ";"; 	
		os << getAutor() << ";";
		os << getEditora() << ";";
		os << getLancamento();
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
		setAutor(aux);
		getline(is, aux, ';'); 	
		setEditora(aux);
		getline(is, aux);
		setLancamento(atoi(aux.c_str()));
		return is; 
	};

public:
	/**@brief Construtor padrao*/
	Livros();

	/**@brief Destrutor padrao*/
	~Livros();

	/**@brief Construtor parametrizado*/
	Livros(int c, string n, float p, int e, string tt, string at, string ed, int aa);

	Livros(Livros &a);

	/**@return Retorna o titulo*/
	string getTitulo(); 

	/**@return Retorna o autor*/
	string getAutor();

	/**@return Retorna a editora */
	string getEditora();

	/**@return Retorna o ano de lancamento*/
	int getLancamento();

	/**@brief Atualiza o titulo
	*@param tt O novo titulo */
	void setTitulo(string tt);

	/**@brief Atualiza o autor
	*@param at O novo autor*/
	void setAutor(string at);

	/**@brief Atualiza a editora
	*@param ed A nova editora */
	void setEditora(string ed);

	/**@brief Atualiza o ano de lancamento
	*@param aa O novo ano de lancamento*/
	void setLancamento(int aa);

	void criar(int key);

};

#endif
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
	ostream& print(ostream& os){
		os << getTipo() << ";";
		os << getChave() << ";"; 	
		os << getNomeProd() << ";"; 	
		os << getPrecoUnit() << ";";
		os << getQtdEstoque() << ";";
		os << getLote() << ";";
		os << *(getDataLote()) << ";";
		os << *(getValidade());
		return os; 
	};

	istream& read(istream& is){
		string aux; 
		Data d;

		getline(is, aux, ';'); 	
		setChave(atoi(aux.c_str())); 	
		getline(is, aux, ';'); 	
		setNomeProd(aux); 	
		getline(is, aux, ';'); 	
		setPrecoUnit(atof(aux.c_str()));
		getline(is, aux, ';');
		setQtdEstoque(atoi(aux.c_str())); 
		getline(is, aux, ';'); 	
		setLote(aux); 
		getline(is, aux, ';'); 	
		d.string2Data(aux);
		setDataLote(d);	
		getline(is, aux); 
		d.string2Data(aux);
		setValidade(d);	
		return is; 
	};

public:
	/**@brief Construtor padrao*/
	Frutas();

	/**@brief Destrutor padrao*/
	~Frutas();

	/**@brief Construtor parametrizado*/
	Frutas(int c, string n, float p, int e, string lt, Data dl, Data dv);

	Frutas(Frutas &a);

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

	void criar(int key);
};

#endif
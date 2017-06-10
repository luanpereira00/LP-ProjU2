/**
 * @file	doces.h
 * @brief	Definicao da classe Doces para representar produtos do tipo Doce
 * @details Os atributos de um Doce sao a qtdAcucar, ter gluten, ter lactose
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#ifndef DOCES_H
#define DOCES_H

#include "data.h"
#include "pereciveis.h"
#include "produtos.h"

/** 
 * @class 	Doces doces.h
 * @brief 	Classe que representa Doces
 * @details Os atributos de um Doce sao a qtdAcucar, ter gluten, ter lactose. Herda atributos e métodos de Produtos e Pereciveis.
 */
class Doces : public Produtos, public Pereciveis {
private:
	float qtdAcucar; /**< A quantidade de acucar*/
	bool gluten; /**< Ter gluten*/
	bool lactose; /**< Ter lactose*/
	ostream& print(ostream& os){
		os << getTipo() << ";";
		os << getChave() << ";"; 	
		os << getNomeProd() << ";"; 	
		os << getPrecoUnit() << ";";
		os << getQtdEstoque() << ";";
		os << getQtdAcucar() << ";";
		os << getGluten() << ";";
		os << getLactose() << ";";
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
		setQtdAcucar(atof(aux.c_str())); 
		getline(is, aux, ';'); 	
		setGluten(atoi(aux.c_str()));
		getline(is, aux, ';'); 	
		setLactose(atoi(aux.c_str()));
		getline(is, aux); 
		d.string2Data(aux);
		setValidade(d);	
		return is; 
	};

public:
	/**@brief Construtor padrao*/
	Doces();

	/**@brief Destrutor padrao*/
	~Doces();

	/**@brief Construtor parametrizado*/
	Doces(int c, string n, float p, int e, float a, bool gt, bool lt, Data dv);

	Doces(Doces &a);

	/**@return Retorna a quantidade de acucar */
	float getQtdAcucar();

	/**@return Retorna bool para ter gluten */
	bool getGluten();

	/**@return Retorna bool para ter lactose */
	bool getLactose();

	/**@brief Atualiza a quantidade de acucar
	*@param a A nova quantidade de acucar*/
	void setQtdAcucar(float a);

	/**@brief Atualiza a informacao sobre gluten
	*@param gt A informacao para atualizar */
	void setGluten(bool gt);

	/**@brief Atualiza a informacao sobre lactose
	*@param lt A informacao para atualizar */
	void setLactose(bool lt);

	void criar(int key);
};

#endif
/**
 * @file	doces.cpp
 * @brief	Implementacoes da classe Docess
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::getline;

#include <string>
using std::string;

#include "doces.h"
#include "data.h"

/**@brief Construtor padrao*/
Doces::Doces(){
	setQtdAcucar(0);
	setGluten(false);
	setLactose(false);
}

/**@brief Destrutor padrao*/
Doces::~Doces(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
Doces::Doces(int c, string n, float p, int e, float a, bool gt, bool lt, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setQtdAcucar(a);
	setGluten(gt);
	setLactose(lt);
	
	setValidade(dv);
}

/**@return Retorna a quantidade de acucar */
float Doces::getQtdAcucar(){ return qtdAcucar; }

/**@return Retorna bool para ter gluten */
bool Doces::getGluten(){ return gluten; }

/**@return Retorna bool para ter lactose */
bool Doces::getLactose(){ return lactose; }

/**@brief Atualiza a quantidade de acucar
	*@param a A nova quantidade de acucar*/
void Doces::setQtdAcucar(float a){ qtdAcucar = a; }

/**@brief Atualiza a informacao sobre gluten
	*@param gt A informacao para atualizar */
void Doces::setGluten(bool gt){ gluten = gt; }

/**@brief Atualiza a informacao sobre lactose
	*@param lt A informacao para atualizar */
void Doces::setLactose(bool lt){ lactose = lt; }

/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar um doce na formatacao "codigo;nome;preco;qtdEstoque;qtdAcucar;gluten;lactose;dataDeValidade"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto doce a ser impresso  
	* @return	Referencia para stream de saida  
	*/
ostream& operator<<(ostream& os, Doces &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getQtdAcucar() << ";";
	os << a.getGluten() << ";";
	os << a.getLactose() << ";";
	os << *(a.getValidade());
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto doce a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/	
istream& operator>>(istream& is, Doces &a){
	string aux; 
	Data d;

	getline(is, aux, ';'); 	
	a.setChave(atoi(aux.c_str())); 	
	getline(is, aux, ';'); 	
	a.setNomeProd(aux); 	
	getline(is, aux, ';'); 	
	a.setPrecoUnit(atof(aux.c_str()));
	getline(is, aux, ';');
	a.setQtdEstoque(atoi(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setQtdAcucar(atof(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setGluten(atoi(aux.c_str()));
	getline(is, aux, ';'); 	
	a.setLactose(atoi(aux.c_str()));
	getline(is, aux); 
	d.string2Data(aux);
	a.setValidade(d);	
	return is; 
}
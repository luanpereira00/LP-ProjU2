/**
 * @file	salgados.cpp
 * @brief	Implementacoes da classe Salgados
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */
#include <iostream>
using std::getline;

#include "salgados.h"
#include "data.h"

/**@brief Construtor padrao*/
Salgados::Salgados(){
	setQtdSodio(0);
	setGluten(false);
	setLactose(false);
}

/**@brief Destrutor padrao*/
Salgados::~Salgados(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
Salgados::Salgados(int c, string n, float p, int e, float s, bool gt, bool lt, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setQtdSodio(s);
	setGluten(gt);
	setLactose(lt);

	setValidade(dv);
}

/**@return Retorna a quantidade de sodio*/
float Salgados::getQtdSodio(){ return qtdSodio; }

/**@return Retorna bool para ter gluten */
bool Salgados::getGluten(){ return gluten; }

/**@return Retorna bool para ter lactose */
bool Salgados::getLactose(){ return lactose; }

/**@brief Atualiza a quantidade de sodio
	*@param s A nova quantidade de sodio*/
void Salgados::setQtdSodio(float s){ qtdSodio = s; }

/**@brief Atualiza a informacao sobre gluten
	*@param gt A informacao para atualizar */
void Salgados::setGluten(bool gt){ gluten = gt; }

/**@brief Atualiza a informacao sobre lactose
	*@param lt A informacao para atualizar */
void Salgados::setLactose(bool lt){ lactose = lt; }

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar um salgado na formatacao "codigo;nome;preco;qtdEstoque;qtdSodio;gluten;lactose;dataDeValidade"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto salgado a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, Salgados &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getQtdSodio() << ";";
	os << a.getGluten() << ";";
	os << a.getLactose() << ";";
	os << *(a.getValidade());
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto salgado a ser criado com base nos  
*			valores fornecidos  
* @return	Referencia para stream de entrada  
*/ 
istream& operator>>(istream& is, Salgados &a){
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
	a.setQtdSodio(atof(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setGluten(atoi(aux.c_str()));
	getline(is, aux, ';'); 	
	a.setLactose(atoi(aux.c_str()));
	getline(is, aux); 
	d.string2Data(aux);
	a.setValidade(d);	
	return is; 
}
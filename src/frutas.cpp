/**
 * @file	frutas.cpp
 * @brief	Implementacao da classe Frutas
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::getline;

#include "frutas.h"
#include "data.h"

/**@brief Construtor padrao*/
Frutas::Frutas(){
	Data d;
	setLote("");
	setDataLote(d);
	setValidade(d);
}

/**@brief Destrutor padrao*/
Frutas::~Frutas(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
Frutas::Frutas(int c, string n, float p, int e, string lt, Data dl, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setLote(lt);
	setDataLote(dl);

	setValidade(dv);
}

/**@return Retorna o lote */
string Frutas::getLote(){ return lote; }

/**@return Retorna a data do lote */
Data* Frutas::getDataLote(){ return &dataDeLote; }

/**@brief Atualiza o lote
	*@param lt O novo lote */
void Frutas::setLote(string lt){ lote = lt; }

/**@brief Atualiza a data do lote
	*@param dl A nova data */ 
void Frutas::setDataLote(Data dl){ dataDeLote = dl; }


/** @brief Sobrecarga do operador de insercao em stream 
	* @details O operador eh sobrecarregado para representar uma fruta na formatacao "codigo;nome;preco;qtdEstoque;lote;dataDeLote;dataDeValidade"  
	* @param	os Referencia para stream de saida  
	* @param	a Referencia para o objeto fruta a ser impresso  
	* @return	Referencia para stream de saida  
	*/
ostream& operator<<(ostream& os, Frutas &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getLote() << ";";
	os << *(a.getDataLote()) << ";";
	os << *(a.getValidade());
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
	* @param	is Referencia para stream de entrada  
	* @param	a Referencia para o objeto fruta a ser criado com base nos  
	*			valores fornecidos  
	* @return	Referencia para stream de entrada  
	*/	
istream& operator>>(istream& is, Frutas &a){
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
	a.setLote(aux); 
	getline(is, aux, ';'); 	
	d.string2Data(aux);
	a.setDataLote(d);	
	getline(is, aux); 
	d.string2Data(aux);
	a.setValidade(d);	
	return is; 
}
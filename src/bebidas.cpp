/**
 * @file	bebidas.cpp
 * @brief	Implementacao dos metodos da classe Bebidas
 * @details Os atributos de uma Bebida sao a chave, o nome, o preco, a quantidade em estoque, o teor alcoolico, a quantidade de acucar, o volume total e a data de validade
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::cout;
using std::endl;
using std::getline;

#include "bebidas.h"
#include "data.h"

/**@brief Construtor padrao*/
Bebidas::Bebidas(){
	setTeorAlcoolico(0.0);
	setQtdAcucar(0.0);
	setVolumeTotal(0);
}

/**@brief Destrutor padrao*/
Bebidas::~Bebidas(){
	//FAZ NADA
}

/**@brief Construtor parametrizado*/
Bebidas::Bebidas(int c, string n, float p, int e, float t, float a, int v, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setTeorAlcoolico(t);
	setQtdAcucar(a);
	setVolumeTotal(v);

	setValidade(dv);
}

/**@return Retorna o teor alcoolico */
float Bebidas::getTeorAlcoolico(){ return teorAlcoolico; }

/**@return Retorna a quantidade de acucar */
float Bebidas::getQtdAcucar(){ return qtdAcucar; }

/**@return Retorna o volume total */
int Bebidas::getVolumeTotal(){ return volumeTotal; }

/**@brief Atualiza o teor alcoolico
	*@param t O novo teor alcoolico */
void Bebidas::setTeorAlcoolico(float t){ teorAlcoolico = t; }

/**@brief Atualiza a quantidade de acucar
	*@param a A nova quantidade de acucar*/
void Bebidas::setQtdAcucar(float a){ qtdAcucar = a; }

/**@brief Atualiza o volume total
	*@param v O novo volume total*/
void Bebidas::setVolumeTotal(int v){ volumeTotal = v; }

/** @brief Sobrecarga do operador de atribuicao (para Bebidas)
	* @param	a Bebida que sera passado por atribuicao  
	* @return	Retorna a Bebida atribuida
	*/
Bebidas& Bebidas::operator=(int a) {
	chave = 0;
	nomeProduto = "";
	precoUnitario = 0;
	qtdEstoque = 0;
	teorAlcoolico =0;
	qtdAcucar = 0;
	volumeTotal =0;
	
    return *this;
}

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar uma bebida na formatacao "codigo;nome;preco;qtdEstoque;teorAlcoolico;qtdAcucar;volumeTotal;dataDeValidade"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto bebida a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, Bebidas &a){
	os << a.getChave() << ";"; 	
	os << a.getNomeProd() << ";"; 	
	os << a.getPrecoUnit() << ";";
	os << a.getQtdEstoque() << ";";
	os << a.getTeorAlcoolico() << ";"; 	
	os << a.getQtdAcucar() << ";";
	os << a.getVolumeTotal() << ";";
	os << *(a.getValidade());
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto bebida a ser criado com base nos  
*			valores fornecidos  
* @return	Referencia para stream de entrada  
*/ 	
istream& operator>>(istream& is, Bebidas &a){
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
	a.setTeorAlcoolico(atof(aux.c_str())); 
	getline(is, aux, ';'); 	
	a.setQtdAcucar(atof(aux.c_str()));
	getline(is, aux, ';'); 	
	a.setVolumeTotal(atoi(aux.c_str()));
	getline(is, aux); 
	d.string2Data(aux);
	a.setValidade(d);	
	return is; 
}
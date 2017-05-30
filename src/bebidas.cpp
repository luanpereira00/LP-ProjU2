#include <iostream>
using std::getline;

#include "bebidas.h"
#include "data.h"

Bebidas::Bebidas(){
	setTeorAlcoolico(0.0);
	setQtdAcucar(0.0);
	setVolumeTotal(0);
}
Bebidas::~Bebidas(){
	//FAZ NADA
}
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

float Bebidas::getTeorAlcoolico(){ return teorAlcoolico; }
float Bebidas::getQtdAcucar(){ return qtdAcucar; }
int Bebidas::getVolumeTotal(){ return volumeTotal; }

void Bebidas::setTeorAlcoolico(float t){ teorAlcoolico = t; }
void Bebidas::setQtdAcucar(float a){ qtdAcucar = a; }
void Bebidas::setVolumeTotal(int v){ volumeTotal = v; }

/** @brief Sobrecarga do operador de atribuicao (para Data)
* @param	d Data que sera passado por atribuicao  
* @return	Retorna a Data atribuida
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
* @details O operador eh sobrecarregado para representar uma bebida na formatacao "codigo;nome;preco;qtdEstoque;teorAlcoolico;qtdAcucar;volumeTotal"  
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
*			valores fornecidos  * @return	Referencia para stream de entrada  
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
	// << aux;
	//a.setValidade();

	return is; 
}
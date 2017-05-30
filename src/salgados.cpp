#include <iostream>
using std::getline;

#include "salgados.h"
#include "data.h"

Salgados::Salgados(){
	setQtdSodio(0);
	setGluten(false);
	setLactose(false);
}
Salgados::~Salgados(){
	//FAZ NADA
}
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

float Salgados::getQtdSodio(){ return qtdSodio; }
bool Salgados::getGluten(){ return gluten; }
bool Salgados::getLactose(){ return lactose; }

void Salgados::setQtdSodio(float s){ qtdSodio = s; }
void Salgados::setGluten(bool gt){ gluten = gt; }
void Salgados::setLactose(bool lt){ lactose = lt; }

/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar uma bebida na formatacao "codigo;nome;preco;qtdEstoque;teorAlcoolico;qtdAcucar;volumeTotal"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto bebida a ser impresso  
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
* @param	a Referencia para o objeto bebida a ser criado com base nos  
*			valores fornecidos  * @return	Referencia para stream de entrada  
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
	// << aux;
	//a.setValidade();

	return is; 
}
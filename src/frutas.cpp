#include <iostream>
using std::getline;

#include "frutas.h"
#include "data.h"

Frutas::Frutas(){
	Data d;
	setLote("");
	setDataLote(d);
	setValidade(d);
}
Frutas::~Frutas(){
	//FAZ NADA
}
Frutas::Frutas(int c, string n, float p, int e, string lt, Data dl, Data dv){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);

	setLote(lt);
	setDataLote(dl);

	setValidade(dv);
}

string Frutas::getLote(){ return lote; }
Data* Frutas::getDataLote(){ return &dataDeLote; }

void Frutas::setLote(string lt){ lote = lt; }
void Frutas::setDataLote(Data dl){ dataDeLote = dl; }


/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar uma bebida na formatacao "codigo;nome;preco;qtdEstoque;teorAlcoolico;qtdAcucar;volumeTotal"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto bebida a ser impresso  
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
* @param	a Referencia para o objeto bebida a ser criado com base nos  
*			valores fornecidos  * @return	Referencia para stream de entrada  
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
	// << aux;
	//a.setValidade();

	return is; 
}
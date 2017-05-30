#include <iostream>
using std::getline;

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

#include "data.h"

Data::Data(){
	setDia(1);
	setMes(1);
	setAno(1900);
}
Data::~Data(){
	//FAZ NADA
}
Data::Data(int dd, int mm, int aa){
	setDia(dd);
	setMes(mm);
	setAno(aa);
}

int Data::getDia(){ return dia; }
int Data::getMes(){ return mes; }
int Data::getAno(){ return ano; }

void Data::setDia(int dd){ dia = dd; }
void Data::setMes(int mm){ mes = mm; }
void Data::setAno(int aa){ ano = aa; }

void Data::string2Data(string a){	
	string aux;
	istringstream iss(a);

	getline(iss, aux, '/');
	setDia(atoi(aux.c_str())); 	
	getline(iss, aux, '/');
	setMes(atoi(aux.c_str())); 
	getline(iss, aux);
	setAno(atoi(aux.c_str())); 

}

/** @brief Sobrecarga do operador de atribuicao (para Data)
* @param	d Data que sera passado por atribuicao  
* @return	Retorna a Data atribuida
*/
Data& Data::operator=(const Data d) {
	dia = d.dia;
	mes = d.mes;
	ano = d.ano;
	
    return *this;
}


/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar uma bebida na formatacao "dd/mm/aaaa"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto Data a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, Data &a){
	os << a.getDia() << "/"; 	
	os << a.getMes() << "/"; 	
	os << a.getAno();
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto Data a ser criado com base nos  
*			valores fornecidos  
* @return	Referencia para stream de entrada  
*/ 	
istream& operator>>(istream& is, Data &a){
	string aux; 

	getline(is, aux, '/'); 	
	a.setDia(atoi(aux.c_str())); 	
	getline(is, aux, '/'); 	
	a.setMes(atoi(aux.c_str())); 
	getline(is, aux); 	
	a.setAno(atoi(aux.c_str())); 	

	return is; 
}
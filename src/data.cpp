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
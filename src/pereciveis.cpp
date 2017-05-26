#include "pereciveis.h"
#include "data.h"

Pereciveis::Pereciveis(){
	Data d;
	setValidade(d);
}
Pereciveis::~Pereciveis(){
	//FAZ NADA
}
Pereciveis::Pereciveis(Data d){
	setValidade(d);
}

Data* Pereciveis::getValidade(){ return &dataDeValidade; }
void Pereciveis::setValidade(Data d){ dataDeValidade = d; }

//bool Pereciveis::isGood2Eat(){}

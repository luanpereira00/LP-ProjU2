#ifndef PERECIVEIS_H
#define PERECIVEIS_H

#include "data.h"

class Pereciveis {
protected:
	Data dataDeValidade;

public:
	Pereciveis();
	~Pereciveis();
	Pereciveis(Data d);

	Data getValidade();
	void setValidade(Data d);

	//bool isGood2Eat();
};

#endif
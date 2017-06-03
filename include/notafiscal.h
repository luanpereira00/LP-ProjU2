#ifndef NOTAFISCAL_H
#define NOTAFISCAL_H

#include "estoque.h"

#include <string>
using std::to_string;
using std::string;


class NotaFiscal : public Estoque {
public:
	void lerArquivo();
};
#endif
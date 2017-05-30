#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <fstream>
using std::ifstream;

#include "estoque.h"

void abrirArquivo(ifstream *arquivo);

void loadData(Estoque* e);

#endif

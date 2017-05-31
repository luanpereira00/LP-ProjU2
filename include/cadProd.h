#ifndef CADASTRAR_H
#define CADASTRAR_H

#include "estoque.h"

void cadastrarProdutos(Estoque *e, int a);
void consultarProdutos();
void removerProduto(Estoque *e, int a);
void adicionarAoCarrinho(Estoque *e, Estoque *carrinho, int a);


#endif
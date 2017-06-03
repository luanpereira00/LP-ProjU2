#ifndef CADASTRAR_H
#define CADASTRAR_H

#include "estoque.h"
#include "carrinho.h"
#include "bebidas.h"
#include "cds.h"
#include "doces.h"
#include "dvds.h"
#include "frutas.h"
#include "livros.h"
#include "salgados.h"
#include "estoque.h"

void cadastrarProdutos(Estoque *e, int a);
void consultarProdutos();
void removerProduto(Estoque *e, int a);
void adicionarAoCarrinho(Estoque *e, Carrinho *carrinho, int a);


#endif
#include <iostream>
using std::cout;
using std::endl;


#include "bebidas.h"
#include "data.h"
#include "cds.h"

int main (){
	Data d;
	Bebidas a(1, "Testando", 1, 10, 10, 100, 1000, d);

	cout << a.getNomeProd() << endl;
	cout << a.getPrecoUnit() << endl;

	CDs b(1, "ProdB", 1, 10, "luiz", "forro", "gonzaga");

	cout << "Nome: " << b.getNomeProd() << endl;
	cout << b.getEstilo() << endl;
	return 0;
}


/*
	CRIAR CLASSES DE BEBIDAS, FRUTAS, CDS, DVDS, SALGADOS, DOCES, LIVROS
	CRIAR CLASSE DE PERECIVEIS
	CRIAR ESTOQUE DE PRODUTOS + '>>' E '<<' DE STREAM
	CRIAR LISTA PARA VENDA
	BEBIDAS -> TEOR_ALCOOLICO, QTD DE ACUCAR, LITRAGEM
	FRUTA -> NUM_LOTE, DATA-LOTE
	DATA -> ?
	SALGADO -> SÓDIO EM MILIGRAMAS, GLUTEN, LACTOSE
	DOCE -> AÇUCAR, GLUTEN, LACTOSE
	CD -> ESTILO, ARTISTA, NOME DO ALBUM
	DVD -> TITULO, GENERO, DURACAO TOTAL
	LIVRO -> AUTOR, TITULO, EDITORA, ANO DE PUBLICACAO

	PERECIVEIS -> DATA DE VALIDADE, BOM PARA CONSUMO
	logs -> ?
	VENDA -> LISTA DE PRODUTOS, SEM REPETITIVIDADE

	LISTA -> PRODUTOS CADASTRADOS, FORNECEDORES, NOTA FISCAL
	*/
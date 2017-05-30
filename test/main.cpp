#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "estoque.h"
#include "bebidas.h"


int main (){
	Bebidas b;
	Estoque *e = new Estoque;
	e->lerDados();

	e->getListaProdutos()->inserir(b);
	e->getListaProdutos()->imprimir();
	//INPUT DADOS


	
	cout << "=======================================" << endl;

	cout << "Finalizando sistema..." << endl;
	
	e->gravarDados();

	delete e;
	//OUTPUT DADOS
	return 0;
}


/*
	---------- Feitos: 

	CRIAR CLASSES DE BEBIDAS, FRUTAS, CDS, DVDS, SALGADOS, DOCES, LIVROS
	CRIAR CLASSE DE PERECIVEIS
	BEBIDAS -> TEOR_ALCOOLICO, QTD DE ACUCAR, LITRAGEM
	FRUTA -> NUM_LOTE, DATA-LOTE
	DATA -> ?
	SALGADO -> SÓDIO EM MILIGRAMAS, GLUTEN, LACTOSE
	DOCE -> AÇUCAR, GLUTEN, LACTOSE
	CD -> ESTILO, ARTISTA, NOME DO ALBUM
	DVD -> TITULO, GENERO, DURACAO TOTAL
	LIVRO -> AUTOR, TITULO, EDITORA, ANO DE PUBLICACAO
	PERECIVEIS -> DATA DE VALIDADE, BOM PARA CONSUMO

	---------- Não Feitos: 
	CRIAR ESTOQUE DE PRODUTOS + '>>' E '<<' DE STREAM
	CRIAR LISTA PARA VENDA
	

	
	logs -> ?
	VENDA -> LISTA DE PRODUTOS, SEM REPETITIVIDADE

	LISTA -> PRODUTOS CADASTRADOS, FORNECEDORES, NOTA FISCAL
	*/
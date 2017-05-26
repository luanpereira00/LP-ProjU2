#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "menu.h"
#include "bebidas.h"
#include "doces.h"
#include "data.h"
#include "pereciveis.h"
#include "cds.h"

int main (){
	Data d;
	string aux;
	Bebidas a(1, "Vinho Branco", 1, 10, 10, 100, 1000, d);
	Doces doc;
	cout << doc << endl;
	cout << a << endl;
	CDs b(1, "ProdB", 1, 10, "luiz", "forro", "gonzaga");
	cout << "Nome: " << b.getNomeProd() << endl;
	cout << b.getEstilo() << endl;
	Pereciveis p;
	aux = "01/08/2006";
	d.string2Data(aux);
	p.setValidade(d);
	cout << *(p.getValidade()) << endl;

	//INPUT DADOS

	int result;
	do{
		result = menuPrincipal();
		switch(result){
			case 1:
			//Menu Produtos
			break;
			case 2:
			//Menu nota fiscal
			break;
			case 3:
			//menu fornecedores;
			break;
			case 4:
			//iniciar venda
			break;
			default:
			break;
		}
	}while(result!=0);
	cout << "=======================================" << endl;

	cout << "Finalizando sistema..." << endl;

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
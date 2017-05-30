#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <algorithm>

#include "estoque.h"
#include "cadastrar.h"
#include "menu.h"

int main (){
	string s = "teste";
	cout << s << endl;
	std::locale loc;
	transform(s.begin(), s.end(), s.begin(), (int (*)(int))toupper);
	cout << s << endl;
	Estoque *e = new Estoque;
	e->lerDados();
	//INPUT DADOS

	int resultPrinc=0;
	do{
		resultPrinc = menuPrincipal();
		switch(resultPrinc){
			case 1:
				switch(menuProdutos()){
					case 1:
						cadastrarProdutos(e, menuCadastrarProdutos());
					break;
					case 2:
						//acessarProduto(e, menuAcessoProduto());
					break;
					case 3:
						e->listarEstoque();
					break;
					default:
					break;
				}
			break;
			case 2:
			
			//Menu nota fiscal
				switch(menuNotaFiscal()){
					case 1:
					break;
					case 2:
					break;
					case 3:
					break;
					default:
					break;
				}
			break;
			case 3:
			//menu fornecedores;
				/*resultAux = menuProdutos();
				switch(resultAux){
					case 1:
					break;
					case 2:
					break;
					case 3:
					break;
					default:
					break;
				}*/
			break;
			case 4:
			//iniciar venda
				switch(menuCarrinho()){
					case 1:
					break;
					case 2:
					break;
					case 3:
					break;
					default:
					break;
				}
			break;
			default:
			break;
		}
	}while(resultPrinc!=0);
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
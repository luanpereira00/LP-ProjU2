#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "estoque.h"
#include "cadProd.h"
#include "menu.h"

int main (){
	Estoque *e = new Estoque;
	Estoque *carrinho = new Estoque;
	Estoque *notasFiscais = new Estoque;
	e->lerDados();
	//INPUT DADOS

	int resultPrinc=0;
	do{
		bool flag =true;
		resultPrinc = menuPrincipal();
		switch(resultPrinc){
			case 1:
				do{
					flag=true;
					switch(menuProdutos()){
						case 1:
							cadastrarProdutos(e, menuOpcoesProdutos());
						break;
						case 2:
							removerProduto(e, menuOpcoesProdutos());
						break;
						case 3:
							e->listarEstoque();
						break;
						case 0:
							flag=false;
						break;
					}
				}while(flag);
			break;
			case 2:
			//Menu nota fiscal
				do{
					flag=true;
					switch(menuNotaFiscal()){
						case 1:
							notasFiscais->lerComoNotaFiscal();
						break;
						case 0:
							flag=false;
						break;
					}
				}while(flag);
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
				do{
					flag = true;
					switch(menuCarrinho()){
						case 1:
							carrinho->listarComoCarrinho();
						break;
						case 2:
							adicionarAoCarrinho(e, carrinho, menuOpcoesProdutos());
						break;
						case 3:
						//remover do carrinho
						break;
						case 4:
							carrinho->gravarComoCarrinho();
						break;
						case 0:
							flag=false;
						break;
					}
				}while(flag);
			break;
			default:
			break;
		}
	}while(resultPrinc!=0);
	cout << "=======================================" << endl;

	cout << "Finalizando sistema..." << endl;
	
	e->gravarDados();

	delete e;
	delete carrinho;
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
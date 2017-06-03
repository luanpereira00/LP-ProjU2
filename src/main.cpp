/**
 * @file	main.cpp
 * @brief	Implementacao da funcao principal
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "estoque.h"
#include "notafiscal.h"
#include "carrinho.h"
#include "cadProd.h"
#include "menu.h"

/**@brief Funcao principal */
int main (){
	Estoque *e = new Estoque;
	Carrinho *carrinho = new Carrinho;
	NotaFiscal *notasFiscais = new NotaFiscal;
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
							notasFiscais->lerArquivo();
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
							adicionarAoCarrinho(e, carrinho, menuOpcoesProdutos());
						break;
						case 2:
						//remover do carrinho
						break;
						case 3:
							carrinho->listar();
						break;
						case 4:
							carrinho->gravarArquivo();
							flag=false;
						break;
						case 0:
						cerr << "Os dados de qualquer compra nao finalizada estao sendo destruidos..." <<  endl;
							carrinho->limpar();
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
	delete notasFiscais;
	//OUTPUT DADOS
	return 0;
}


/*
	----------- FALTAS: 
	Retirar produtos do carrinho;
	Menu fornecedores inteiro;
	Evitar repetitividade dos produtos na nota e/ou cadastro;
	Solicitar a quantidade do produto comprado;
	Decrementar o produto do estoque;
	Acrescentar o produto a lista de venda;

	Correr pro abraço;
	

	
	*/
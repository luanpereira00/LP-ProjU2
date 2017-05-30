#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#include <string>
using std::string;

#include "estoque.h"

int menuPrincipal(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Menu Principal ---" << endl;
		cout << "1 - Menu Produtos" << endl;
		cout << "2 - Menu Nota Fiscal" << endl;
		cout << "3 - Menu Fornecedores" << endl;
		cout << "4 - Iniciar venda" << endl;
		cout << "0 - Sair" << endl;
		cout << "Opcao: ";
		cin >> result;
		if(result<0 or result>4) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>4);

	return result;
} //Acessar outros menus;
int menuProdutos(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Menu de Produtos ---" << endl;
		cout << "1 - Cadastrar Produto" << endl;
		cout << "2 - Remover Produto" << endl;
		cout << "3 - Listar Todos os Produtos Cadastrados" << endl;
		cout << "0 - Voltar" << endl;
		cout << "Opcao: ";
		cin >> result;
		if(result<0 or result>3) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>3);

	return result;
} //Cadastro, acesso, listagem

int menuAcessoProduto(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Menu de Acesso a Produtos ---" << endl;
		cout << "1 - Alterar Informações do Produto" << endl;
		cout << "2 - Remover Produto da Lista" << endl;
		cout << "0 - Voltar" << endl;
		cout << "Opcao: ";
		cin >> result;
		if(result<0 or result>2) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>2);

	return result;
} //Cadastro, acesso, listagem
int menuNotaFiscal(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Menu de Notas Fiscais ---" << endl;
		cout << "1 - Listar Notas Fiscais" << endl;
		cout << "2 - Acessar Nota Fiscal" << endl;
		cout << "0 - Voltar" << endl;
		cout << "Opcao: ";
		cin >> result;
		if(result<0 or result>2) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>2);

	return result;
} 

int menuAcessoNotaFiscal(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Menu de Acesso a Notas Fiscais ---" << endl;
		cout << "1 - Alterar Nota Fiscal" << endl;
		cout << "2 - Remover Nota Fiscal dos Registros" << endl;
		cout << "0 - Voltar" << endl;
		cout << "Opcao: ";
		cin >> result;
		if(result<0 or result>2) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>2);

	return result;
} //Exibir, excluir

int menuCarrinho(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Menu de Carrinho ---" << endl;
		cout << "1 - Listar Carrinho" << endl;
		cout << "2 - Adicionar ao Carrinho" << endl;
		cout << "3 - Remover do Carrinho" << endl;
		cout << "0 - Voltar" << endl;
		cout << "Opcao: ";
		cin >> result;
		if(result<0 or result>3) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>3);

	return result;
} 

int menuOpcoesProdutos(){
	int result;
	do{
		cout << "=======================================" << endl;
		cout << "--- Produtos ---" << endl;
		cout << "Qual tipo de produto deseja? " << endl;
		cout << "1 - Bebida" << endl;
		cout << "2 - CD" << endl;
		cout << "3 - Doce" << endl;
		cout << "4 - DVD" << endl;
		cout << "5 - Fruta" << endl;
		cout << "6 - Livro" << endl;
		cout << "7 - Salgado" << endl;
		cout << "0 - Voltar" << endl;
		cout << "Opcao: ";
		cin >> result;
		if (result<0 or result>7) cerr << "OPCAO INVALIDA! TENTE NOVAMENTE..." << endl;
	}while(result<0 or result>7);
	return result;
}

//menu
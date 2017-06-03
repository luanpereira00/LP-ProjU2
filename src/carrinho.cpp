#include "carrinho.h"

void Carrinho::gravarArquivo(){
	string closing;
	if(!carrinhoIsEmpty()){
		int a = verUltimaNotaFiscal();
		closing = "./data/notasFiscais/"+ to_string(a) +"_nota.csv";
		ofstream nota(closing);
		getListaBebidas()->imprimirArquivo(&nota);
		getListaCDs()->imprimirArquivo(&nota);
		getListaDoces()->imprimirArquivo(&nota);
		getListaDVDs()->imprimirArquivo(&nota);
		getListaFrutas()->imprimirArquivo(&nota);
		getListaLivros()->imprimirArquivo(&nota);
		getListaSalgados()->imprimirArquivo(&nota);
		nota.close();	
		limpar();
		cout << "Venda finalizada com sucesso! Nota fiscal gerada..." << endl;
	}
	else cerr << "Carrinho vazio! Nada a fazer..." << endl;
}

bool Carrinho::carrinhoIsEmpty(){
	if(getListaBebidas()->contarElementos()>0) return false;
	if(getListaCDs()->contarElementos()>0) return false;
	if(getListaDoces()->contarElementos()>0) return false;
	if(getListaDVDs()->contarElementos()>0) return false;
	if(getListaFrutas()->contarElementos()>0) return false;
	if(getListaLivros()->contarElementos()>0) return false;
	if(getListaSalgados()->contarElementos()>0) return false;

	return true;
}

int Carrinho::verUltimaNotaFiscal(){
	bool flag =true;
	int i=0;
	string opening;
	while (flag){
		i++;
		opening = "./data/notasFiscais/"+ to_string(i) +"_nota.csv";
		ifstream nota(opening);
		if(!nota) flag=false;
		else nota.close();	
	}
	return i;
}

void Carrinho::listar(){
	cout << "-----------------------" << endl;
	cout << "Carrinho: " << endl << endl;
	if(getListaBebidas()->contarElementos()>0) {
		getListaBebidas()->imprimir();
	}
	if(getListaCDs()->contarElementos()>0) {
		getListaCDs()->imprimir();
	}
	if(getListaDoces()->contarElementos()>0) {
		getListaDoces()->imprimir();
	}
	if(getListaDVDs()->contarElementos()>0) {
		getListaDVDs()->imprimir();
	}
	if(getListaFrutas()->contarElementos()>0) {
		getListaFrutas()->imprimir();
	}
	if(getListaLivros()->contarElementos()>0) {
		getListaLivros()->imprimir();
	}
	if(getListaSalgados()->contarElementos()>0) {
		getListaSalgados()->imprimir();
	}
	cout << "-----------------------" << endl;
}

void Carrinho::limpar(){
	getListaBebidas()->destruir();
	getListaCDs()->destruir();
	getListaDVDs()->destruir();
	getListaDoces()->destruir();
	getListaFrutas()->destruir();
	getListaLivros()->destruir();
	getListaSalgados()->destruir();
}
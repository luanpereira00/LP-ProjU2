/**
 * @file	carrinho.cpp
 * @brief	Implementacao da classe Estoque para representar um carrinho de produtos
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include "carrinho.h"

/**@return Retorna o preco da compra */
float Carrinho::getPrecoCompra(){ return precoCompra; }

/**@brief Atualiza o preco da compra */
void Carrinho::setPrecoCompra(float pc){ precoCompra = pc; }

/**@brief Grava o carrinho num arquivo */
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
		nota << getPrecoCompra();
		nota.close();	
		limpar();
		cout << "Venda finalizada com sucesso! Nota fiscal gerada..." << endl;
	}
	else cerr << "Carrinho vazio! Nada a fazer..." << endl;
}

/**@return Retorna bool para o carrinho estar vazio */
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

/**@return O numero da ultima nota fiscal cadastrada */
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

/**@brief Lista o carrinho */
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
	cout << "Total do carrinho: " << getPrecoCompra() << endl;
	cout << "-----------------------" << endl;
}

/**@brief Limpa o carrinho */
void Carrinho::limpar(){
	getListaBebidas()->destruir();
	getListaCDs()->destruir();
	getListaDVDs()->destruir();
	getListaDoces()->destruir();
	getListaFrutas()->destruir();
	getListaLivros()->destruir();
	getListaSalgados()->destruir();
}

/**@brief Atualiza o preco da compra somando com um valor passado como argumento 
	* @param pc O novo valor a somar */
void Carrinho::calcularCompra(float preco){
	setPrecoCompra(getPrecoCompra()+preco);
}
#include <string>
using std::string;

#include "produtos.h"

//enum para tipos de produtos?

Produtos::Produtos(){ //virtual
	setChave(0);
	setNomeProd("");
	setPrecoUnit(0);
	setQtdEstoque(0);
}
Produtos::~Produtos(){
	//Faz Nada
}

Produtos::Produtos(int c, string n, float p, int e){
	setChave(c);
	setNomeProd(n);
	setPrecoUnit(p);
	setQtdEstoque(e);
}

int Produtos::getChave(){ return chave; }
string Produtos::getNomeProd(){ return nomeProduto; }
float Produtos::getPrecoUnit(){ return precoUnitario; }
int Produtos::getQtdEstoque(){ return qtdEstoque; }

void Produtos::setChave(int c) { chave = c; }
void Produtos::setNomeProd(string n){ nomeProduto = n; }
void Produtos::setPrecoUnit(float p){ precoUnitario = p; }
void Produtos::setQtdEstoque(int e){ qtdEstoque = e; }


/** @brief Sobrecarga do operador de menor que (para Produtos)
* @param	p Data que sera passado para comparacao  
* @return	Retorna bool para a atribuicao
*/
bool Produtos::operator<(Produtos p) {
	if(chave<p.chave) return true;
	else return false;
}

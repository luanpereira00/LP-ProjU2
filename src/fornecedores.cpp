#include "fornecedores.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::getline;

#include <string>
using std::string;
using std::to_string;

#include <fstream>
using std::ostream;
using std::istream;

Fornecedores::Fornecedores(){
	setNome("");
	setProduto(0);
	setChave(0);
	setQtd(0);
}

string Fornecedores::getNome(){ return nomeEmpresa;}
int Fornecedores::getProduto(){ return tipoProduto;}
int Fornecedores::getChave(){ return chaveProduto;}
int Fornecedores::getQtd(){ return qtdProduto; }

void Fornecedores::setNome(string n){ nomeEmpresa = n;}
void Fornecedores::setProduto(int p){ tipoProduto = p;}
void Fornecedores::setChave(int c){ chaveProduto = c;}
void Fornecedores::setQtd(int q){ qtdProduto = q; }

void Fornecedores::imprimirTela(){
	cout << "Nome: " << nomeEmpresa << endl;
	cout << "Produto fornecido: " << tipoProduto << endl;
	cout << "Chave: " << chaveProduto << endl;
	cout << "Quantidade do produto: " << qtdProduto << endl;
}
void Fornecedores::imprimirArquivo(){
	string closing;

	closing = "./data/fornecedores/"+ to_string(getLastFornecedores())+"_fornec.csv";
	ofstream fornec(closing);
	fornec << nomeEmpresa << ";" << tipoProduto << ";" << chaveProduto << ";" << qtdProduto << endl;  
	fornec.close();
}
void Fornecedores::lerArquivo(){
	bool flag =true;
	int i=0;
	string opening;
	while (flag){
		i++;
		opening = "./data/fornecedores/"+ to_string(i) +"_fornec.csv";
		ifstream fornec(opening);
		if(!fornec) flag=false;
		else {
			if(i==1) cout << "--- Lista de Fornecedores ---" << endl;
			cout << "===========================================" << endl;
			Fornecedores f;
			fornec >> f;
			cout << "--- Fornecedor " << i << " ---" << endl;
			f.imprimirTela();
		}
	}
	cout << "===========================================" << endl;
}

int Fornecedores::getLastFornecedores(){
	bool flag =true;
	int i=0;
	string opening;
	while (flag){
		i++;
		opening = "./data/fornecedores/"+ to_string(i) +"_fornec.csv";
		ifstream fornec(opening);
		if(!fornec) flag=false;
		else fornec.close();	
	}
	return i;
}

void Fornecedores::criar(){
	cin.ignore();
	cout << "Digite o nome da empresa: ";
	getline(cin, nomeEmpresa);

	cout << "Digite o tipo de produto: ";
	cin >> tipoProduto;
	cout << "Digite a chave do produto: ";
	cin >> chaveProduto;
	cout << "Digite a quantidade da entrega: ";
	cin >> qtdProduto;
}	

bool Fornecedores::verificarNoEstoque(Estoque *e){
	node<Bebidas>* B;				
	node<CDs>* C;						
	node<Doces>* D;							
	node<DVDs>* V;							
	node<Frutas>* F;
	node<Livros>* L;							
	node<Salgados>* S;

	if(getProduto()==1) {
		B = e->getListaBebidas()->buscar(getChave());
		if(B->prox->prox) {
			B->prox->dado.setQtdEstoque(B->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}
	if(getProduto()==2) {
		C = e->getListaCDs()->buscar(getChave());
		if(C->prox->prox) {
			C->prox->dado.setQtdEstoque(C->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}
	if(getProduto()==3) {
		D = e->getListaDoces()->buscar(getChave());
		if(D->prox->prox) {
			D->prox->dado.setQtdEstoque(D->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}
	if(getProduto()==4) {
		V = e->getListaDVDs()->buscar(getChave());
		if(V->prox->prox) {
			V->prox->dado.setQtdEstoque(V->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}
	if(getProduto()==5) {
		F = e->getListaFrutas()->buscar(getChave());
		if(F->prox->prox) {
			F->prox->dado.setQtdEstoque(F->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}
	if(getProduto()==6) {
		L = e->getListaLivros()->buscar(getChave());
		if(L->prox->prox) {
			L->prox->dado.setQtdEstoque(L->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}
	if(getProduto()==7) {
		S = e->getListaSalgados()->buscar(getChave());
		if(S->prox->prox) {
			S->prox->dado.setQtdEstoque(S->prox->dado.getQtdEstoque()+getQtd());
			return true;
		}
	}

	return false;
}


/** @brief Sobrecarga do operador de insercao em stream 
* @details O operador eh sobrecarregado para representar uma bebida na formatacao "codigo;nome;preco;qtdEstoque;teorAlcoolico;qtdAcucar;volumeTotal;dataDeValidade"  
* @param	os Referencia para stream de saida  
* @param	a Referencia para o objeto bebida a ser impresso  
* @return	Referencia para stream de saida  
*/
ostream& operator<<(ostream& os, Fornecedores &a){
	os << a.getNome() << ";"; 	
	os << a.getProduto() << ";"; 	
	os << a.getChave() << ";";
	os << a.getQtd();
	return os; 
}

/** @brief Sobrecarga do operador de extracao de stream 
* @param	is Referencia para stream de entrada  
* @param	a Referencia para o objeto bebida a ser criado com base nos  
*			valores fornecidos  
* @return	Referencia para stream de entrada  
*/ 	
istream& operator>>(istream& is, Fornecedores &a){
	string aux; 
	getline(is, aux, ';'); 	
	a.setNome(aux); 

	getline(is, aux, ';'); 	
	a.setProduto(atoi(aux.c_str())); 

	getline(is, aux, ';'); 	
	a.setChave(atoi(aux.c_str()));	

	getline(is, aux); 	
	a.setQtd(atoi(aux.c_str()));
	return is; 
}
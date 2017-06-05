/**
 * @file	cadprod.cpp
 * @brief	Implementação de funções que cadastram/adicionam w removem produtos de estoque/carrinho
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::getline;

#include <string>
using std::string;

#include <cstdlib>

#include "cadProd.h"

/**@brief Cadastra um produto no estoque */
void cadastrarProdutos(Estoque *e, int a){
	string auxS;
	float auxF;
	int auxI;
	Data dv;
	Bebidas b;
	CDs c;
	Doces d;
	DVDs v;
	Frutas f;
	Livros l;
	Salgados s;
	if(a!=0){
		cin.ignore();
		cout << "Digite o nome do produto: ";
		getline(cin, auxS);
		cout << "Digite o preco unitario do produto: ";
		cin >> auxF;
		cout << "Digite a quantidade em estoque do produto: ";
		cin >> auxI;
		switch(a){
			case 1: //BEBIDAS
				b.setChave(e->getLastKey()+1);
				b.setNomeProd(auxS);
				b.setPrecoUnit(auxF);
				b.setQtdEstoque(auxI);

				cout << "Digite o teor alcoolico da bebida: ";
				cin >> auxF;
				b.setTeorAlcoolico(auxF);

				cout << "Digite a quantidade de acucar da bebida: ";
				cin >> auxF;
				b.setQtdAcucar(auxF);

				cout << "Digite o volume total da bebida: ";
				cin >> auxI;
				b.setVolumeTotal(auxI);
				cout << "Digite a data de validade da bebida: ";
				cin >> auxS;
				dv.string2Data(auxS);
				b.setValidade(dv);

				e->setLastKey(e->getLastKey()+1);
				e->getListaBebidas()->inserir(b);
				cout << "Inserido com sucesso!" << endl;
			break;
			case 2: //CDS
				c.setChave(e->getLastKey()+1);
				c.setNomeProd(auxS);
				c.setPrecoUnit(auxF);
				c.setQtdEstoque(auxI);

				cin.ignore();
				cout << "Digite o nome do album do CD: ";
				getline(cin, auxS);
				c.setAlbum(auxS);

				//cin.ignore();
				cout << "Digite o estilo do CD: ";
				getline(cin, auxS);
				c.setEstilo(auxS);

				//cin.ignore();
				cout << "Digite o nome do artista do CD: ";
				getline(cin, auxS);
				c.setArtista(auxS);

				e->setLastKey(e->getLastKey()+1);
				e->getListaCDs()->inserir(c);
				cout << "Inserido com sucesso!" << endl;
			break;
			case 3: //DOCES
				d.setChave(e->getLastKey()+1);
				d.setNomeProd(auxS);
				d.setPrecoUnit(auxF);
				d.setQtdEstoque(auxI);

				cout << "Digite a quantidade de acucar no doce: ";
				cin >> auxF;
				d.setQtdAcucar(auxF);

				cout << "Digite 1(true) ou 0(false) para ter gluten: ";
				cin >> auxI;
				//criar condicional
				d.setGluten(auxI);

				cout << "Digite 1(true) ou 0(false) para ter lactose: ";
				cin >> auxI;
				d.setLactose(auxI);

				cout << "Digite a data de validade do doce: ";
				cin >> auxS;
				dv.string2Data(auxS);
				d.setValidade(dv);

				e->setLastKey(e->getLastKey()+1);
				e->getListaDoces()->inserir(d);
				cout << "Inserido com sucesso!" << endl;
			break;
			case 4: //DVDS
				v.setChave(e->getLastKey()+1);
				v.setNomeProd(auxS);
				v.setPrecoUnit(auxF);
				v.setQtdEstoque(auxI);

				cin.ignore();
				cout << "Digite o titulo do DVD: ";
				getline(cin, auxS);
				v.setTitulo(auxS);

				//cin.ignore();
				cout << "Digite o genero do DVD: ";
				getline(cin, auxS);
				v.setGenero(auxS);

				cout << "Digite a duracao do DVD: ";
				cin >> auxI;
				v.setMinutos(auxI);

				e->setLastKey(e->getLastKey()+1);
				e->getListaDVDs()->inserir(v);
				cout << "Inserido com sucesso!" << endl;
			break;
			case 5: //FRUTAS
				f.setChave(e->getLastKey()+1);
				f.setNomeProd(auxS);
				f.setPrecoUnit(auxF);
				f.setQtdEstoque(auxI);

				cin.ignore();
				cout << "Digite o lote da fruta: ";
				getline(cin, auxS);
				f.setLote(auxS);

				cout << "Digite a data do lote: ";
				cin >> auxS;
				dv.string2Data(auxS);
				f.setValidade(dv);

				cout << "Digite a data de validade do doce: ";
				cin >> auxS;
				dv.string2Data(auxS);
				f.setValidade(dv);

				e->setLastKey(e->getLastKey()+1);
				e->getListaFrutas()->inserir(f);
				cout << "Inserido com sucesso!" << endl;
			break;
			case 6: //LIVROS
				l.setChave(e->getLastKey()+1);
				l.setNomeProd(auxS);
				l.setPrecoUnit(auxF);
				l.setQtdEstoque(auxI);

				cin.ignore();
				cout << "Digite o titulo do livro: ";
				getline(cin, auxS);
				l.setTitulo(auxS);

				//cin.ignore();
				cout << "Digite o autor do livro: ";
				getline(cin, auxS);
				l.setAutor(auxS);

				//cin.ignore();
				cout << "Digite a editora do livro: ";
				getline(cin, auxS);
				l.setEditora(auxS);

				cout << "Digite o ano de lancamento: ";
				cin >> auxI;
				l.setAno(auxI);

				e->setLastKey(e->getLastKey()+1);
				e->getListaLivros()->inserir(l);
				cout << "Inserido com sucesso!" << endl;
			break;
			case 7: //SALGADOS
				s.setChave(e->getLastKey()+1);
				s.setNomeProd(auxS);
				s.setPrecoUnit(auxF);
				s.setQtdEstoque(auxI);

				cout << "Digite a quantidade de sodio no salgado: ";
				cin >> auxF;
				s.setQtdSodio(auxF);

				cout << "Digite 1(true) ou 0(false) para ter gluten: ";
				cin >> auxI;
				//criar condicional
				s.setGluten(auxI);

				cout << "Digite 1(true) ou 0(false) para ter lactose: ";
				cin >> auxI;
				s.setLactose(auxI);

				cout << "Digite a data de validade do salgado: ";
				cin >> auxS;
				dv.string2Data(auxS);
				s.setValidade(dv);

				e->setLastKey(e->getLastKey()+1);
				e->getListaSalgados()->inserir(s);
				cout << "Inserido com sucesso!" << endl;
			break;
		}
		
		//doces
		//frutas
		//libros
		//salgados
	}
}

/**@brief Remove um produto do estoque */
void removerProduto(Estoque *e, int a){
	cout << "--- Produtos Cadastrados ---" << endl;
	int key;
	if(a!=0){
		switch(a){
			case 1: //BEBIDAS

				e->getListaBebidas()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaBebidas()->remover(key);
			break;
			case 2: //CDS
				e->getListaCDs()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaCDs()->remover(key);
			break;
			case 3: //DOCES
				e->getListaDoces()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaDoces()->remover(key);
			break;
			case 4: //DVDS
				e->getListaDVDs()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaDVDs()->remover(key);
			break;
			case 5: //FRUTAS
				e->getListaFrutas()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaFrutas()->remover(key);
			break;
			case 6: //LIVROS
				e->getListaLivros()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaLivros()->remover(key);
			break;
			case 7: //SALGADOS
				e->getListaSalgados()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				e->getListaSalgados()->remover(key);
			break;
		}
	}
}


/**@brief Adiciona um produto ao carrinho */
void adicionarAoCarrinho(Estoque *e, Carrinho *carrinho, int a){
	cout << "--- Produtos Cadastrados ---" << endl;
	int key;
	Bebidas b;
	node<Bebidas>* B;
	CDs c;
	node<CDs>* C;
	Doces d;
	node<Doces>* D;
	DVDs v;
	node<DVDs>* V;
	Frutas f;
	node<Frutas>* F;
	Livros l;
	node<Livros>* L;
	Salgados s;
	node<Salgados>* S;

	if(a!=0){
		switch(a){
			case 1: //BEBIDAS
				e->getListaBebidas()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				B = e->getListaBebidas()->buscar(key);
				if(B->prox->prox){
					b = B->prox->dado;
					B->prox->dado.setQtdEstoque(B->prox->dado.getQtdEstoque()-1);
					carrinho->calcularCompra(b.getPrecoUnit());
					carrinho->getListaBebidas()->inserir(b);
				}
			break;
			case 2: //CDS
				e->getListaCDs()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				C = e->getListaCDs()->buscar(key);
				if(C->prox->prox){
					c = C->prox->dado;
					C->prox->dado.setQtdEstoque(C->prox->dado.getQtdEstoque()-1);
					//c.setQtdEstoque(c.getQtdEstoque()-1);
					carrinho->calcularCompra(c.getPrecoUnit());
					carrinho->getListaCDs()->inserir(c);
				}
			break;
			case 3: //DOCES
				e->getListaDoces()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				D = e->getListaDoces()->buscar(key);
				if(D->prox->prox){
					d = D->prox->dado;
					D->prox->dado.setQtdEstoque(D->prox->dado.getQtdEstoque()-1);
					//d.setQtdEstoque(d.getQtdEstoque()-1);
					carrinho->calcularCompra(d.getPrecoUnit());
					carrinho->getListaDoces()->inserir(d);
				}
			break;
			case 4: //DVDS
				e->getListaDVDs()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				V = e->getListaDVDs()->buscar(key);
				if(V->prox->prox){
					v = V->prox->dado;
					V->prox->dado.setQtdEstoque(V->prox->dado.getQtdEstoque()-1);
					//v.setQtdEstoque(v.getQtdEstoque()-1);
					carrinho->calcularCompra(v.getPrecoUnit());
					carrinho->getListaDVDs()->inserir(v);
				}
			break;
			case 5: //FRUTAS
				e->getListaFrutas()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				F = e->getListaFrutas()->buscar(key);
				if(F->prox->prox) {
					f = F->prox->dado;
					F->prox->dado.setQtdEstoque(F->prox->dado.getQtdEstoque()-1);
					//f.setQtdEstoque(f.getQtdEstoque()-1);
					carrinho->calcularCompra(f.getPrecoUnit());
					carrinho->getListaFrutas()->inserir(f);
				}
			break;
			case 6: //LIVROS
				e->getListaLivros()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				L = e->getListaLivros()->buscar(key);
				if(L->prox->prox){
					l = L->prox->dado;
					L->prox->dado.setQtdEstoque(L->prox->dado.getQtdEstoque()-1);
					//l.setQtdEstoque(l.getQtdEstoque()-1);
					carrinho->calcularCompra(l.getPrecoUnit());
					carrinho->getListaLivros()->inserir(l);
				}
			break;
			case 7: //SALGADOS
				e->getListaSalgados()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				S = e->getListaSalgados()->buscar(key);
				if(S->prox->prox){
					s = S->prox->dado;
					S->prox->dado.setQtdEstoque(S->prox->dado.getQtdEstoque()-1);
					//s.setQtdEstoque(s.getQtdEstoque()-1);
					carrinho->calcularCompra(s.getPrecoUnit());
					carrinho->getListaSalgados()->inserir(s);
				}
			break;
		}
	}
}

/**@brief Remove um produto do carrinho */
void removerDoCarrinho(Estoque *e, Carrinho *carrinho, int a){
	//cout << "--- Produtos Cadastrados ---" << endl;
	int key;
	Bebidas b;
	node<Bebidas>* B;
	CDs c;
	node<CDs>* C;
	Doces d;
	node<Doces>* D;
	DVDs v;
	node<DVDs>* V;
	Frutas f;
	node<Frutas>* F;
	Livros l;
	node<Livros>* L;
	Salgados s;
	node<Salgados>* S;
	
	if(a!=0){
		//carrinho->listar();
		switch(a){
			case 1: //BEBIDAS
				carrinho->getListaBebidas()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaBebidas()->remover(key);
				B = e->getListaBebidas()->buscar(key);
				if(B->prox->prox){
					b = B->prox->dado;
					carrinho->calcularCompra((-1)*b.getPrecoUnit());
				}
				
			break;
			case 2: //CDS
				carrinho->getListaCDs()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaCDs()->remover(key);
				C = e->getListaCDs()->buscar(key);
				if(C->prox->prox){
					c = C->prox->dado;
					carrinho->calcularCompra((-1)*c.getPrecoUnit());
				}
			break;
			case 3: //DOCES
				carrinho->getListaDoces()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaDoces()->remover(key);
				D = e->getListaDoces()->buscar(key);
				if(D->prox->prox){
					d = D->prox->dado;
					carrinho->calcularCompra((-1)*d.getPrecoUnit());
				}
			break;
			case 4: //DVDS
				carrinho->getListaDVDs()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaDVDs()->remover(key);
				V = e->getListaDVDs()->buscar(key);
				if(V->prox->prox){
					v = V->prox->dado;
					//b.getQtdEstoque()
					carrinho->calcularCompra((-1)*v.getPrecoUnit());
				}
			break;
			case 5: //FRUTAS
				carrinho->getListaFrutas()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaFrutas()->remover(key);
				F = e->getListaFrutas()->buscar(key);
				if(F->prox->prox){
					f = F->prox->dado;
					carrinho->calcularCompra((-1)*f.getPrecoUnit());
				}
			break;
			case 6: //LIVROS
				carrinho->getListaLivros()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaLivros()->remover(key);
				L = e->getListaLivros()->buscar(key);
				if(L->prox->prox){
					l = L->prox->dado;
					carrinho->calcularCompra((-1)*l.getPrecoUnit());
				}
			break;
			case 7: //SALGADOS
				carrinho->getListaSalgados()->imprimir();
				cout << "Digite a chave de busca: ";
				cin >> key;
				carrinho->getListaSalgados()->remover(key);
				S = e->getListaSalgados()->buscar(key);
				if(S->prox->prox){
					s = S->prox->dado;
					//b.getQtdEstoque()
					carrinho->calcularCompra((-1)*s.getPrecoUnit());
				}
			break;
		}
	}
}
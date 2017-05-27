#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::getline;

#include <string>
using std::string;

#include <cstdlib>

#include "cadastrar.h"
#include "bebidas.h"
#include "cds.h"
#include "doces.h"
#include "dvds.h"
#include "frutas.h"
#include "livros.h"
#include "salgados.h"
#include "estoque.h"

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

				cin.ignore();
				cout << "Digite o estilo do CD: ";
				getline(cin, auxS);
				c.setEstilo(auxS);

				cin.ignore();
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

				cin.ignore();
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

				cin.ignore();
				cout << "Digite o autor do livro: ";
				getline(cin, auxS);
				l.setAutor(auxS);

				cin.ignore();
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
void consultarProdutos();
void alterarProdutos();
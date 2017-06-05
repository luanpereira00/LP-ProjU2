/**
 * @file	notafiscal.cpp
 * @brief	Implementacao da classe NotaFiscal para representar uma nota fiscal
 * @author	Luan Pereira (luanpereira00@outlook.com)
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include "notafiscal.h"

/**@brief Ler notas da memoria e as exibe */
void NotaFiscal::lerArquivo(){
	cout << "--- Notas Fiscais Identificadas ---"<< endl;
	bool flag=true;
	int numArq=1;
	int qtdLista=0;
	int iter=0;
	string preco="0";
	string opening;

	Bebidas b;
	CDs c;
	Doces d;
	DVDs v;
	Frutas f;
	Livros l;
	Salgados s;

	while(flag){
		opening = "./data/notasFiscais/"+to_string(numArq)+"_nota.csv";
		ifstream nota(opening);
		if(!nota) flag = false;
		else{
			cout << "--- Nota " << numArq << " ---"  << endl; 
			nota >> qtdLista;
			while(iter<qtdLista) {
				nota >> b;
				iter++;
				cout << b << endl;
			}
			nota >> qtdLista;
			iter=0;
			while(iter<qtdLista) {
				nota >> c;
				iter++;
				cout << c << endl;
			}
			nota >> qtdLista;
			iter=0;
			while(iter<qtdLista) {
				nota >> d;
				iter++;
				cout << d << endl;
			}
			nota >> qtdLista;
			iter=0;
			while(iter<qtdLista) {
				nota >> v;
				iter++;
				cout << v << endl;
			}
			nota >> qtdLista;
			iter=0;
			while(iter<qtdLista) {
				nota >> f;
				iter++;
				cout << f << endl;
			}
			nota >> qtdLista;
			iter=0;
			while(iter<qtdLista) {
				nota >> l;
				iter++;
				cout << l << endl;
			}
			nota >> qtdLista;
			iter=0;
			while(iter<qtdLista) {
				nota >> s;
				iter++;
				cout << s << endl;
			}
			nota >> preco;
			cout << "Preco: " << preco << endl;
			cout << endl;
			nota.close();
		}
		numArq++;
	}

	//int qtdNotas = verUltimaNotaFiscal();

}
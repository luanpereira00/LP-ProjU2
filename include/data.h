#ifndef DATA_H
#define DATA_H

#include <string>
using std::string;

#include <ostream> 
using std::ostream; 

#include <istream> 
using std::istream;

class Data{
private:	
	int dia;
	int mes;
	int ano;
public:
	Data();
	~Data();
	Data(int dd, int mm, int aa);

	int getDia();
	int getMes();
	int getAno();

	void setDia(int dd);
	void setMes(int mm);
	void setAno(int aa);

	void string2Data(string a);

	Data& operator=(const Data d);
	friend ostream& operator<<(ostream& os, Data &a);
	friend istream& operator>>(istream& is, Data &a);
};

#endif
#ifndef DATA_H
#define DATA_H

class Data{
protected:	
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
}

#endif
#include<iostream>
#include"Tyre.h"
using namespace std;

class Car
{
private:
	int* model;
	char* company;
	Tyre t1;

public:

	Car()
	{
		model = new int;
		company = new char;

	}
	Car(int x, const char *w[], Tyre t1) 
	{
		*model = x;
		strcpy(company, *w);
	}
	void PrintCar()
	{
		cout << "Model: " << model << "company:  " << company << endl;
	}
	~Car()
	{
		delete[]model;
		delete[]company;
		cout << "~Car() called";
	}

};
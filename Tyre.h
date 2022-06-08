#include<iostream>
using namespace std;

class Tyre
{
private:

	int* width;
    int* aspect_ratio;
	int* diameter;

public:
	Tyre()
	{
		width = new int;
		aspect_ratio = new int;
		diameter = new int;
	}
	Tyre(int a, int b,int c)
	{
		width = &a;
		aspect_ratio = &b;
		diameter = &c;
		cout << "Tyre() called" << endl;
	}
	int getwidth()
	{
		return *width;

	}
	int getaspect_ratio()
	{
		return *aspect_ratio;

	}
	int getdiameter()
	{
		return *diameter;

	}
	void Printtyre()
	{
		cout << "Width: " << width << "aspectratio: " << aspect_ratio << "diameter: "<<diameter << endl;
	}
	~Tyre()
	{
		delete[]width;
		delete[]aspect_ratio;
		delete[]diameter;
		cout << "~Tyre() called" << endl;
	}

};
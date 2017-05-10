#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
class stepen
{
public:
	int first;
	int second;
	void ipart();
	void Display();
	void Read();
};
float rez;
int main()
{
	stepen a;
	a.Read();
	a.ipart();
	a.Display();
	system("pause");
    return 0;
}
void stepen::Read()
{
	cout << ("first "); cin >> first;
	cout << ("second "); cin >> second;
}
void stepen::Display()
{
	cout << ("\n rezultat =") << rez << endl;
}
void stepen::ipart()
{
	int n = 0;
	n = first/second;
	rez = abs((int)n);
}

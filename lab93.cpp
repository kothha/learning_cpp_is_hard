#include "stdafx.h"
#include <iostream>
#include <cctype> 
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char * s = "+3112.";
	bool error = false; int n = strlen(s); int zn = 0;
	if ((s[0] == '+') || (s[0] == '-')) zn = zn+1;
		if ((s[0] != '0')&&(s[n - 1] == '.'))
		{
			for (int i = 0; i < n-(1+zn); i++)
			{
				if (!isdigit(s[i+zn]))
				{
					error = true;
					cout << "��� ������������ ������ �����" << endl; break;
				}
			}
		} else { error = true; cout << "��� ������������ ������ �����, ���� ��� ����� � ����� ������" << endl;}
	if (error == false)
	{
		cout << "��� ���������� ������ �����" << endl;
	}
	system("pause");
    return 0;
}


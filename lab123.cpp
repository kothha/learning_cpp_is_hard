/*������� ����� EngMoney ��� ������ � ���������� ��������
�������� ��������������. � ��� �������������� �����, �������� � �����. 
��� ����: 1 ���� = 20 ���������, 1 ������� =12 ������. (1f=20sh=240p)
�������� ����� ����� ���������� � ������, ��������� � ������ � ��������� ����������
�����  �  ����  ���������.  ������  ����  �����������:  
��������  � ���������, ��������� � �������, ��������� ����.*/
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
class EngMoney
{
public:
	float fynt;
	float shilingov;
	float pensov;
	void vyvod()
	{
		cout << "\n\n Results:";
		cout << "\n fynt= " << (int)fynt;
		cout << "\n shilingov= " << (int)shilingov;
		cout << "\n pensov= " << (int)pensov;
	}
	void vvod()
	{
		cout << "\n fynt= ";cin>> fynt;
		cout << "\n shilingov= "; cin>> shilingov;
		cout << "\n pensov= "; cin >> pensov;
	}
	void sloj(EngMoney f)
	{
		fynt = f.fynt + f.shilingov/20 + f.pensov/240;
		shilingov = f.fynt*20 +f.shilingov + f.pensov/12;
		pensov = f.fynt*240 + f.shilingov*12 + f.pensov;
	}
	void vichitan(EngMoney f)
	{
		fynt = f.fynt - (f.shilingov/20 + f.pensov/240);
		shilingov = f.shilingov - (f.fynt * 20 + f.pensov/12);
		pensov = f.pensov - (f.shilingov * 12 + f.fynt * 240);
	}
	void ymnojen(EngMoney f)
	{
		fynt = f.fynt * f.shilingov/20 * f.pensov/240;
		shilingov = f.shilingov * f.fynt * 20 * f.pensov/12;
		pensov = f.pensov * f.shilingov * 12 * f.fynt * 240;
	}
	void delen(EngMoney f)
	{
		fynt = f.fynt / f.shilingov/20 / f.pensov/240;
		shilingov = f.shilingov / f.fynt * 20 / f.pensov/12;
		pensov = f.pensov / f.shilingov * 12 / f.fynt * 240;
	}
	void sravnenie(EngMoney f)
	{
		if ((f.pensov > f.shilingov * 12) && (f.pensov > f.fynt * 240)) cout << "\n pensov bolshe " <<  f.pensov;
		if ((f.shilingov > f.pensov / 12) && (f.shilingov > f.fynt * 20)) cout << "\n shilingov bolshe " << f.shilingov;
		if ((f.fynt > f.pensov / 240) && (f.fynt > f.shilingov / 20)) cout << "\n fynt bolshe " << f.fynt; 
		if (((f.pensov == f.shilingov * 12) && (f.pensov == f.fynt * 240))) cout << "\n oni ravni";
	}
};

int main()
{
	EngMoney f, p;
	f.vvod();
	p.sloj(f);
	p.vyvod();
	p.vichitan(f);
	p.vyvod();
	p.ymnojen(f);
	p.vyvod();
	p.delen(f);
	p.vyvod();
	p.sravnenie(f);
	system("pause");
    return 0;
}


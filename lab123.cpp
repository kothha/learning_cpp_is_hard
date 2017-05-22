/*Создать класс EngMoney для работы с устаревшей денежной
системой Великобритании. В ней использовались фунты, шиллинги и пенсы. 
При этом: 1 фунт = 20 шиллингов, 1 шиллинг =12 пенсов. (1f=20sh=240p)
Денежные суммы будут задаваться в фунтах, шиллингах и пенсах и результат выдаваться
также  в  этих  величинах.  Должны  быть  реализованы:  
сложение  и вычитание, умножение и деление, сравнение сумм.*/
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
		cout << "\n fynt= " << fynt;
		cout << "\n shilingov= " << shilingov;
		cout << "\n pensov= " << pensov;
	}
	void vvod()
	{
		cout << "\n fynt= ";cin>> fynt;
		cout << "\n shilingov= "; cin>> shilingov;
		cout << "\n pensov= "; cin >> pensov;
	}
	void sloj(EngMoney f)
	{
		fynt = f.fynt + f.shilingov*(1/20) + f.pensov*(1 / 240);
		shilingov = f.fynt*20 +f.shilingov + f.pensov * (1/12);
		pensov = f.fynt*240 + f.shilingov*12 + f.pensov;
	}
	void vichitan(EngMoney f)
	{
		fynt = f.fynt - (f.shilingov*(1 / 20) + f.pensov*(1 / 240));
		shilingov = f.shilingov - (f.fynt * 20 + f.pensov * (1 / 12));
		pensov = f.pensov - (f.shilingov * 12 + f.fynt * 240);
	}
	void ymnojen(EngMoney f)
	{
		fynt = f.fynt * f.shilingov*(1 / 20) * f.pensov*(1 / 240);
		shilingov = f.shilingov * f.fynt * 20 * f.pensov * (1 / 12);
		pensov = f.pensov * f.shilingov * 12 * f.fynt * 240;
	}
	void delen(EngMoney f)
	{
		fynt = f.fynt / f.shilingov*(1 / 20) / f.pensov*(1 / 240);
		shilingov = f.shilingov / f.fynt * 20 / f.pensov * (1 / 12);
		pensov = f.pensov / f.shilingov * 12 / f.fynt * 240;
	}
	void sravnenie(EngMoney f)
	{

	}
};

int main()
{
	EngMoney f, s, p;
	f.vvod();
	p.sloj(f);
	p.vyvod();
	p.vichitan(f);
	p.vyvod();
	p.ymnojen(f);
	p.vyvod();
	p.delen(f);
	p.vyvod();
	system("pause");
    return 0;
}

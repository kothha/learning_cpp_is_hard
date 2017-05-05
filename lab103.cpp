#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

	struct ych {
		string fam;
		string name;
		char bykva;
		int nomer;
	};

int main()
{
	ych spisok[10];
	for (int i=0; i < 10; i++) {
		cout << "Enter fam, name , nomer, bykva for " << i+1 << "\n";
		cin >> spisok[i].fam >> spisok[i].name >> spisok[i].nomer >> spisok[i].bykva;
	}
	for (int i = 0; i <= 10-1; i++)
	for (int k = i + 1; k <= 10; k++){
		if ((spisok[i].fam == spisok[k].fam) && (spisok[i].name == spisok[k].name)) {
			cout << "Answer: \n";
			cout << spisok[i].fam << " " << spisok[i].name << " " << spisok[i].nomer << " " << spisok[i].bykva << " " << i+1 << endl;
			cout << spisok[k].fam << " " << spisok[k].name << " " << spisok[k].nomer << " " << spisok[k].bykva << " " << k+1 << endl;
		}
	}
	return 0;
}

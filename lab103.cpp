#include <iostream>
#include <iomanip>
using namespace std;

struct ycheniki {
    char fam[15];
    char name[15];
    char bykva;
    int nomer;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    ycheniki spis[11]; int n=2; int i,k;
    for (i=1; i<=n; i++) {
        cout << "Фамилия, имя, номер и буква ученика " << i << endl; //lol
        cin >> spis[i].fam >> spis[i].name >> spis[i].nomer >> spis[i].bykva;
    }
    cout << "Одиноковое имя и фамилия у: ";
    for (i=1; i<=n-1; i++) {
    for (k=i+1; k<=n; k++) {
        if ((spis[i].fam==spis[k].fam)&&(spis[i].name==spis[k].name)) {
            cout << spis[i].fam << " " << spis[i].name << " " << spis[i].nomer << " " << spis[i].bykva << endl;
            cout << spis[k].fam << " " << spis[k].name << " " << spis[k].nomer << " " << spis[k].bykva << endl;
        } } }
    return 0;
}


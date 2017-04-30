#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    struct ycheniki {
        char fam[15];
        char name[15];
        char bykva;
        int nomer;
    };
    ycheniki spis[10]; int n=10;
    for (i=0; i<=n; i++) {
        cout << "Famulu9, um9 , bykBa ,Homep"; //lol
        cin >> spis[i].fam >> spis[i].name >> spis[i].bykva >> spis[i].nomer;
    }

    return 0;
}



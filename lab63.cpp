//lab3 6.3 Belykov
// 100%
/* for VS
#include "stdafx.h" = <cstdlib>
*/
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int i,j,s=1;
    //задание массива
    int m[5][5];
    int b[5];
    srand(time(0));
    for(j=0;j<5;j++)
    {
    for(i=0;i<5;i++)
        {
          m[j][i]=rand()%3+1;
        }
    }
    for (j=0;j<5;j++)
    {
    for (i=0;i<5;i++)
    {
        s*=m[j][i];
    }
    b[j]=s; s=1; cout << b[j] << endl;
    }

    return 0;
}

//This programm about tragic love (lab3 5.3 Belykov)
// 50%
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n,proiz=1,summ=0;
    cout << "n= ";
    cin >> n;
    int *arr = new int[n];

    for (int i=0; i < n; i++)
    {
        cout << i << " = ";
        cin >> arr[i]; //ввод в массив
    }

    for (int i=0; i < n; i++)
    {
        if ((i%2)==0)
        {
            proiz*=arr[i];
        }
    }
    for (int i=0; i < n; i++)
    {
        if (arr[i]!=0)
        {
        summ+=arr[i];
        }
    }

    cout << "summ= " << summ << endl;
    cout << "proiz= " << proiz << endl;
    return 0;
}

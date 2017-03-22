//This programm about tragic love (lab3 5.3 Belykov)
#include <iostream>
using namespace std;
int proiz(int n, int p, int *arr);

int main(int argc, char *argv[])
{
    int n,p;
    cin >> n; //rand ()%RAND_MAX
    int *arr = new int[n];

    p=proiz( n, p, arr);
    cout << p;
    return 0;
}

int proiz(int n, int p, int *arr)
{
    for (int i=0; i < n; i++)
    {
        if ((i%2)==0)
        {
        p*=arr[i];
        }
    }

    return p;
}

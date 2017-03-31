//lab3 5.3 Belykov
// 100%
#include <iostream>
using namespace std;

int main()
{
    int n,proiz=1,summ=0,j=0,k=0,por=0;
    cout << "n= ";
    cin >> n;
    int *arr = new int[n];

    for (int i=0; i < n; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
//произведение эл. с четными номерами
    for (int i=0; i < n; i++)
        if ((i%2)==0) proiz*=arr[i];
//сумма эл. между 1 и последним нулевым значением
    for(int i=0;i<n;i++)
          if(arr[i]==0)
          {
              j=i; break;
          }
    for(int i=0;i<n;i++)
          if(arr[i]==0)
          k=i;
    for(int i=j;i<k;i++)
          summ+=arr[i];
//сортировка массива от большего к меньшему
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        if ((arr[i]>arr[j])&&(i!=j))
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
    for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    cout << endl <<"summ= " << summ << endl;
    cout << "proiz= " << proiz;
    return 0;
}

//8.3 by me and crusadwerei0fojxskvmjsklf
#include <iostream>
#include <cmath>
using namespace std;

float a;
int n;

float stepen (int n, float b);
int main ()
{
    float proiz;
    cin>>n>>a;
    if (n%2 ==0) proiz=stepen(n/2,a)*stepen(n/2,a) ; else  proiz=a*stepen(n-1,a);
    cout << proiz;
    return 0;
}

float stepen (int n, float b)
{
    if (n)
     {
     b=pow(b,n); stepen(n-1,b);
     } else return(b);
}

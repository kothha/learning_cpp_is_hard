//7.3
#include <iostream>
#include <cmath>
using namespace std;
float ploshad (float xx1,float yy1,float xx2,float yy2,float xx3,float yy3); //функция вычисления площади

int main ()
{
    float x1,y1,x2,y2,x3,y3,pl1,pl2,pl3;
    int i;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    pl1=ploshad(x1,y1,x2,y2,x3,y3);
    cout << pl1 << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    pl2=ploshad(x1,y1,x2,y2,x3,y3);
    cout << pl2 << endl;
    if (pl1>pl2) cout << "1 bolshe"; else if (pl1<pl2) cout << "2 bolshe"; else cout << "oni ravni";
    return 0;
}


float ploshad (float xx1,float yy1,float xx2,float yy2,float xx3,float yy3)
{
    float sp;
    sp=abs(((xx1-xx3)*(yy2-yy3)-(xx2-xx3)*(yy1-yy3))/2);
    return (sp);
}
#include <bits/stdc++.h>
using namespace std;
 
int func(long long  int a,long long int b,long long int *x, long long int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
   long long int x1, y1; 
    int gcd = func(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
 
int main()
{
    long long int x, y, a=0, b = 0;
    cin >> a;
    cin >> b;
    long long int g = func(a, b, &x, &y);
    cout << "("<< x << ")a" << "+(" << y << ")b"
         << " = " << g << endl;
    return 0;
}
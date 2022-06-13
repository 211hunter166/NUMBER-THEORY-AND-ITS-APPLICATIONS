#include <bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int flag=1;

int eet( int a,int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
   int x1, y1; 
    int gcd = eet(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

int modinv(int n,int b){
   int x,g,y;
   g=eet(n,b,&x,&y) ;
   if (g!=1){ cout << "crm failed" ; flag=0; return 0; }
   else {x= (x%b + b)%b;
   }
   return x;
}

int main () {
    int n,x=0,N=1;
    cin >> n;
    int num[n];
    int mod[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i] >> mod[i] ;
        N= N*num[i];

    }
    for(int i = 0; i < n; i++){
     
       x+= (mod[i])*(N/num[i])*(modinv(N/num[i],num[i]));
       if (flag!=0) break;
     //  cout << x << endl;
     // cout <<num[i] << mod[i]<< endl;
    }

   // cout << N;
   if (flag!=0)
    {cout << "required number = " << (x%N) << "(mod" << N << ")";}
    return 0;
}
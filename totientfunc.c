#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int a,int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int coprime(int n,int i){
    if (gcd(n,i)==1) return 1;
    else return 0;
}

int main(){
    long long int n=0;
    scanf("%lld",&n);

    int ct=0;
    for (int i=0; i<n ;i++){
        if (coprime(n,i)==1) ct++;
    }
    printf("%d",ct);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long long int n=0;
    scanf("%lld",&n);
    int* arr=(int *)malloc(n*(sizeof(long long int)));
    for (int i=0;i<n;i++){
        arr[i]=1;
    }
    for (int i=2;i<=sqrt(n)+1;i++){
        for (int j=i*i;j<=n;j++){
            if (j%i == 0) arr[j]=0;
        }
    }
    for (int i=2;i<=n;i++){
        if (arr[i])
        printf("%d \n",i);
    }
    
    return 0;
}
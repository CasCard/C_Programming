//
// Created by abel on 08/07/20.
// Factorial of a number using pointer call by reference
#include <stdio.h>
#include <stdlib.h>
long long int fact(int *n);
int main(){
    int n;
    long long int ans;
    setbuf(stdout,NULL);
    printf("enter a number to find factorial: ");
    scanf("%d",&n);
    ans=fact(&n);
    printf("%lld",ans);
    return 0;
}
long long int fact(int *n){
    if(*n==0 || *n==1) {
        return 1;
    }
    else {
        *n=*n-1;
        return (*n+1) * fact(n);
    }
}

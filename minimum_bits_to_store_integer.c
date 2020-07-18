//
// Created by abel on 18/07/20.
//
#include <stdlib.h>
#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if (n==0){
        return 0;
    }
    for (int i = 0; i < 32; ++i) {
        if ((1<<i)&n){
            count=i;
        }
    }
    printf("Number of bits required = %d \n",++count);
    return 0;
}

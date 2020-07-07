//
// Created by abel on 04/07/20.
//
#include <stdio.h>
swapr(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a=10,b=20;
    swapr(&a,&b);
    printf("\n a=%d b=%d",a,b);
    return 0;
}


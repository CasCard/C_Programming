//
// Created by abel on 04/07/20.
// Call by value method of swapping
#include <stdio.h>
void swapv(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("\nx=%d y=%d",x,y);
}
int main(){
    int a=10,b=20;
    swapv(a,b);
    printf("\na=%d b=%d",a,b);

    return 0;
}

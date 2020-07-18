//
// Created by abel on 18/07/20.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=(printf("6"),8,4,2);
    setbuf(stdout,NULL);
    printf("%d",x);
    return 0;
}

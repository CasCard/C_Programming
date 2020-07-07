//
// Created by abel on 07/07/20.
//
#include <stdio.h>
main(){
    static int x[10]={10,11,12,13,14,15,16,17,18,19};
    int i;
    for (i = 0; i <= 9 ; ++i) {
        printf("\n i=%d x[i]=%d *(x+i)=%d",i,x[i],*(x+i));
        printf(" &x[i]=%x x+i=%x",&x[i],(x+i));
    }
}

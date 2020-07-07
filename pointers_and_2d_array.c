//
// Created by abel on 07/07/20.
// Pointer and Two Dimensional array
#include <stdio.h>

main(){
    int s[4][2]={
//            0   1
            {1234,56},
            {121,33},
            {1434,80},
            {1312,78}
    };


    for (int j = 0; j <= 3; ++j) {
        printf("\nAddress of %d th 1-D array = %u",j,s[j]);
    }

    int i,j;
    for (i = 0; i <= 3  ; ++i) {
        printf("\n");
        for (j = 0; j <=1; ++j) {
            printf("%d ",*(*(s+i)+j));
        }
    }
    printf("\n");
    int (*p)[2];
    int l,m,*pint;
    for (l = 0; l <= 3; ++l) {
        p=&s[l];
        pint = p;
        printf("\n");
        for ( m= 0;  m<=1; ++m) {
            printf("%d ",*(pint+m));
        }
    }
}

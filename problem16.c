//
// Created by abel on 07/07/20.
//
#include <stdio.h>
main(){
    static int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("\n%u %u %d",p,*p,*(*p));
    int *pos=&a[0];
    printf("\n");
    printf("%d",(*pos));
}


//
// Created by abel on 07/07/20.
// passing an entire array to a function
#include <stdio.h>
main(){
    int num[]={24,34,12,44,56,17};
    display(&num[0],6);
}
display(int *j,int n){
    for (int i = 0; i < n-1; ++i) {
        printf("\nelement = %d",*j);
        j++;
    }
}
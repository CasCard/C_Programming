//
// Created by abel on 07/07/20.
//
#include <stdio.h>
int main(){
//    accessing array elements without using pointer
    int arr[]={10,20,30,40,64,56,74};
    for (int j = 0; j <= 5; ++j) {
        printf("\naddress = %u ",&arr[j]);
        printf("element = %d",arr[j]);
    }
//    accessing array elements using pointer
    int *i=&arr[0];
    for (int k = 0;  k<=5 ; k++) {
        printf("\n add = %u ",i);
        printf("elem= %d ",*i);
        i++;
    }
    return 0;
}

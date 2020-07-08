//
// Created by abel on 08/07/20.
// Sum or array using pointers
#include <stdlib.h>
#include <stdio.h>
int main(){
    int size,*x,sum=0;
    setbuf(stdout,NULL);
    printf("Input the number of elements to store");
    scanf("%d",&size);
    printf("Enter elements :");
    x=(int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; ++i) {
        scanf("%d",x+i);
    }
    for (int j = 0; j < size; ++j) {
        sum=sum+*(x+j);
    }
    printf("%d",sum);
    return 0;
}



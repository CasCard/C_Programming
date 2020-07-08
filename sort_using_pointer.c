//
// Created by abel on 08/07/20.
// sort array using pointer
#include <stdio.h>
#include <stdlib.h>
void sort(int *x,int size);
int main(){
    int size,*x;
    setbuf(stdout,NULL);
    printf("enter size of array");
    scanf("%d",&size);
    x=(int*)malloc(sizeof(int)*size);
    for (int i = 0; i < size; ++i) {
        scanf("%d",(x+i));
    }
    sort(x,size);

    for (int i = 0; i < size; ++i) {
        printf("%d ",*(x+i));
    }
}
void sort(int *x,int size){
    int temp;
    for (int item = 0; item < size - 1; ++item) {
        for (int i = item+1; i < size; ++i) {
            if (*(x+i)<*(x+item)){
                temp=*(x+item);
                *(x+item)=*(x+i);
                *(x+i)=temp;
            }
        }
    }
}

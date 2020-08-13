#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void generate(int *array,int size) {
    int i = 1, j = 0, *new_array = (int *) malloc(size * sizeof(int));
    new_array[0] = array[0];  // 0:5
    new_array[1] = array[1];  // 1:7

    while (i >= 0 && i < size) {
        if (new_array[i] == 0)
            new_array[i]=array[i];

        if (new_array[i] > new_array[(i - 1) / 2]) { // (7>5) (15>9) (7>5) (12>7)
            swap(&new_array[i], &new_array[(i - 1) / 2]);
            if ((i-1)/2==0){
                i++;
            }else{
                i=(i-1)/2;
            }

        }else{
            i++;
        }
    }
    for (int i = 0; i < size; ++i) {
        printf("%d ", new_array[i]);
    }
}
int main(){
    setbuf(stdout,NULL);
    int size,*array;
    scanf("%d",&size);
    array=(int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; ++i) {
        scanf("%d",&array[i]);
    }
    generate(array,size);

    return 0;
}

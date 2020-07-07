//
// Created by abel on 07/07/20.
//
#include <stdio.h>
#include <stdlib.h>
void reorder(int n,int *x);
main(){
//    *x : array declared as pointer
    int i,n,*x;
//    read in value of n
setbuf(stdout,NULL);
printf("\n How many numbers will be entered ?");
scanf("%d",&n);
printf("\n");
//allocate memory
x=(int*)malloc(n*sizeof(int));
//read in list of numbers
    for (i = 0; i < n; ++i) {
        printf("i=%d x= ",i+1);
        scanf("%d",x+i);
    }
//    reorder all array elements
reorder(n,x);
//    display the reorderd list of numbers
printf("\n Recorded List of numbers:\n\n");
    for (i = 0; i < n; ++i) {
        printf("i = %d x = %d\n",i+1,*(x+i));
    }
}
void reorder(int n,int *x){
    int i,item,temp;
    for (item = 0; item < n - 1; ++item) {
        for (i  = item+1; i < n; ++i) {
            if (*(x+i)<*(x+item)){
//            interchange two elements
                temp=*(x+item);
                *(x+item)=*(x+i);
                *(x+i)=temp;
            }
        }
    }
}


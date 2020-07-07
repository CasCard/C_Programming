//
// Created by abel on 07/07/20.
// Three ways of accessing a 2-D array
#include <stdio.h>
int main(){
    int a[3][4]={
            1,2,3,4
            ,5,6,7,8,9,
            0,1,6
    };

    display(a,3,4);
    printf("\n");
    show(a,3,4);
    printf("\n");
    print(a,3,4);

    return 0;
}
display(int *q,int row,int col){
    int i,j;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
//            (base address+row_no*no_of_columns+column_no)
            printf("%d ",*(q+i*col+j));
//            printf("\n");
        }
        printf("\n");
    }
}
show(int (*q)[4],int row,int col){
    int i,j;
    int *p;
//    back testing
    printf("\n");
    for(i=0;i<row;i++){
        p=q+i;
        for(j=0;j<col;j++){
            printf("%d ",*(p+j));
        }
        printf("\n");
    }
    printf("\n");
}
print(int q[][4],int row,int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ",q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}



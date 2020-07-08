//
// Created by abel on 08/07/20.
// pointer based finding the largest elemnt in array
#include <stdio.h>
#include <stdlib.h>
int *largest(int *i,int *j);
int main(){
    int number1,number2,*large;
    setbuf(stdout,NULL);
    printf("first number :");
    scanf("%d",&number1);
    scanf("%d",&number2);
    large=largest(&number1,&number2);
    printf("\n%d",*large);
    return 0;
}
int *largest(int *i,int *j){
    if ((*i)>(*j)){
        return i;
    }else{
        return j;
    }
}

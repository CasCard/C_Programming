//
// Created by abel on 08/07/20.
//Reverse a string using pointer
#include <stdio.h>
int main(){
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;
    setbuf(stdout,NULL);
    printf("Input a string");
    scanf("%s",str1);
    while (*stptr){
        stptr++;
        i++;
    }
    while (i>=0){
        stptr--;
        *rvptr=*stptr;
        rvptr++;
        --i;
    }
    *rvptr='\0';
    printf("Reverse of string is : %s\n\n",revstr);

    return 0;
}
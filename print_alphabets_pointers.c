//
// Created by abel on 08/07/20.
// Print all the alphabets using pointers
#include <stdio.h>
int main(){
//    initalizing alphabet array
    char alph[27];
//    x acts as a counter
    int x;
//    pointer declaration
    char *ptr;
//   first memory location is assigned to the ptr
    ptr=alph;

//    Adding moving pointer A to Z

    for (x = 0; x < 26; ++x) {
        *ptr=x+'A';
        ptr++;
    }
    ptr=alph;
    printf("The alphabets are : \n");
    for (x= 0; x < 26; ++x) {
        printf("%c ",*ptr);
        ptr++;
    }

    return 0;
}


//
// Created by abel on 09/07/20.
//
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
void piglatin(char *s,int length);
int main(){
    char *x=malloc(20);
    int length;
    setbuf(stdout,NULL);
    printf("Enter text to generate piglatin:");
    scanf("%s",x);
    length=strlen(x);
    piglatin(x,length);
    return 0;
}
void piglatin(char *s,int length){
    char firstcharacter=s[0];
    for (int i = 0; i < length; ++i) {
        *(s+i)=*(s+i+1);
    }
    *(s+length-1) = firstcharacter;
    *(s+length) = 'a';
    printf("%s",s);
}

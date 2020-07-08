//
// Created by abel on 08/07/20.
// count vowels and consonants in a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void countVowelAndConstants(char *x,int *vowel,int *constant);
int main(){
    setbuf(stdout,NULL);
    char *x=malloc(50);
    int vowels=0,constants=0;
    printf("enter a string");
    scanf("%s",x);
    countVowelAndConstants(x,&vowels,&constants);
    printf("%s %d %d",x,vowels,constants);
    return 0;
}
void countVowelAndConstants(char *x,int *vowel,int *constant){
    int length=strlen(x);
    int vow=0;
    for(int i = 0; i < length; ++i) {
//        to lower function reads character one at a time
        *(x+i)=tolower(*(x+i));
        if (*(x+i)=='a' || *(x+i)=='e'||*(x+i)=='i' || *(x+i)=='o'|| *(x+i)=='u'){
            vow++;
        }
    }
    *vowel=vow;
    *constant=(length-vow);
}



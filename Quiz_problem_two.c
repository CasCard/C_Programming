//
// Created by abel on 09/07/20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void distance(char *c,int length);
int main(){
    setbuf(stdout,NULL);
    char *s;
    int length;
    scanf("%[^\n]%*c",s);
    length=strlen(s);
    distance(*s,length);
    return 0;
}

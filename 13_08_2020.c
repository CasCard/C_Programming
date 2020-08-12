//
// Created by abel on 12/08/20.
//
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main(){
    setbuf(stdout,NULL);
    char *string=malloc(100);
    int max=-100,min=100,count=0,minCount,j,string_length;
    char max_repeated,temp,min_repeated,search_char;
    scanf("%[^\n]s",string);
//    printf("%s\n",string);
    string_length=strlen(string);
//    printf("%d\n",string_length);
    search_char=string[string_length-1];
    j=string_length-1;

    while (j>=0){
        minCount=0;
        for (int k = string_length-1; k >= 0; --k) {
            if (string[k]==search_char){
                minCount++;
            }
        }
        if(minCount<=min){
            min=minCount;
            min_repeated=search_char;
        }
//        printf("\nsearch %c \n",string[j]);
        j--;
        search_char=string[j];
    }

//    printf("%d %c\n",min,min_repeated);
    j=0;
    for (int k = 0; k < string_length; ++k) {
        for (int l=k+1;l<string_length;l++){
            if (string[k]>string[l]){
                temp=string[k];
                string[k]=string[l];
                string[l]=temp;
            }
        }
    }
//    printf("%s\n",string);
    search_char=string[j];
    while (search_char){
        for (int k = j; k < string_length; ++k) {
            if (string[k]==search_char){
                count++;
            }
        }

        if (count>max){
            max=count;
            max_repeated=search_char;
        }
        j+=count;
        count=0;
        search_char=string[j];
    }
//    printf("%d %c",max,max_repeated);
    printf("%d",abs(max_repeated-min_repeated));
    return 0;
}

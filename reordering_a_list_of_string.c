//
// Created by abel on 08/07/20.
// reordering a list of strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reorder(char *str[],int size);
int main(){
    setbuf(stdout,NULL);
    int n=0;
    char *strings[10];
    printf("Enter each string on a seperate line below\n\n");
    printf("Type \'END\' when finished\n\n");
//    read in the list of strings
    do{
//        allocate memory
    strings[n]=(char *)malloc(12*sizeof(char ));
    printf("string %d:",n+1);
    scanf("%s",strings[n]);
    }while (strcmp(strings[n++],"END"));

    reorder(strings,--n);
    for (int i = 0; i < n; ++i) {
        printf("string %d: %s ",i+1,strings[i]);
    }
    return 0;
}
void reorder(char *str[],int size){
    char *temp;
    int i,item;
    for (item = 0; item<size-1; item++) {
        for (i = item+1; i < size; ++i) {
            if (strcmp(str[item],str[i])>0){
                temp=str[item];
                str[item]=str[i];
                str[i]=temp;
            }
        }
    }
//    char temp;
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = i+1; j < size; ++j) {
//            if (*(str[j])<*(str[i])){
//                temp = *(str[j]);
//                *(str[j])=*(str[i]);
//                *(str[i])= temp;
//            }
//        }
//    }
}
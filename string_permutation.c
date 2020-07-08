//
// Created by abel on 08/07/20.
// string abcd : 4! permutation = 24
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void permute(char *s,int l,int r);
void swap(char *a,char *b);
long long int factorial(int *n);
int main(){
    setbuf(stdout,NULL);
    char *x=malloc(50);
    int length;
    printf("string to be permuted :");
    scanf("%s",x);
    length=strlen(x);
    permute(x,0,length-1);
    printf("\nNumber of permutation : %lld\n",factorial(&length));
    return 0;
}

void permute(char *s,int l,int r){
    if (l==r){
        printf("%s ",s);
    }else{
        for (int i = l; i <=r; ++i) {
            swap(s+l,s+i);
            permute(s,l+1,r);
            swap((s+l),(s+i));
        }
    }
}
void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
long long factorial(int *n){
    if (*n==1 || *n==0){
        return 1;
    }else{
        *n=*n-1;
        return (*n+1)*factorial(n);
    }
}
// number of character is depth of the stack
/*
 * consider example output for 'abc'
 *
 * 1)   permute(abc,0,2)
 * 1.0) following operation with i as variation
 *      swap(a,a)
 *      permute(abc,1,2)
 *      swap(a,a)
 *      1.0.1)
 *          swap(b,b)
 *          swap(abc,2,2) ->print (l==r)
 *          swap(b,b)
 *      1.0.2)
 *          swap(b,c)
 *          swap(acb,2,2) ->print
 *          swap(b,c)
 * 1.1)
 *      swap(a,b)
 *      permute(bac,1,2)
 *      swap(a,b)
 *      1.1.1)
 *          swap(a,a)
 *          swap(bac,2,2) ->print
 *          swap(a,a)
 *      1.0.2)
 *          swap(a,c)
 *          swap(bca,2,2) ->print
 *          swap(a,c)
 * 1.2)
 *      swap(a,c)
 *      permute(cba,1,2)
 *      swap(a,c)
 *      1.2.1)
 *          swap(b,b)
 *          swap(cba,2,2) ->print
 *          swap(b,b)
 *      1.2.2)
 *          swap(b,a)
 *          swap(cab,2,2) ->print
 *          swap(b,a)
 *
 */


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int num)
{
   return (num==1||num==0)? 1: num*factorial(num-1);
}


int main(){

int testcases, num;
int result;
scanf("%d", &testcases);              			

while(testcases){
    scanf("%d", &num);
    result = factorial(num);
    printf("%d\n", result);
    testcases--;
}
    
}


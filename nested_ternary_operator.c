//
// Created by abel on 17/07/20.
// working of Nested Ternaary Operator
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
/*
 * Various form of nested ternary operator
 * 1) a?b:c
 * -->  if(a)
 *          then b
 *      else
 *          c execute
 * 2) a?b:c?d:e?f:g?h:i
 * --> if(a)
 *         then b
 *     else if c
 *         then d
 *     else if e
 *         then f
 *     else if g
 *         then h
 *     else
 *         i
 *3) a?b?c:d:e
 *   if(a)
 *      if(b)
 *          c execute
 *      else
 *          d execute
 *   else
 *      e execute
 *
 */
    int i=8,j=0,k=0;
    setbuf(stdout,NULL);
    k=(j>5)?(i<5)?i-j:j-i:k-j;
    printf("%d",k);
    i-=(i)?(j)?(k):(k++):(i);
    printf("\n%d",k);
    return 0;
}

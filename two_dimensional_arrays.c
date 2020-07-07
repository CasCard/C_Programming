//
// Created by abel on 07/07/20.
//
#include <stdio.h>
main(){
    int stud[4][2];
    int i,j;
    setbuf(stdout,NULL);
    for (i = 0; i <=3 ; ++i) {

        printf("Enter roll no and marks\n");
        scanf("%d %d",&stud[i][0],&stud[i][1]);
    }

    for(i=0;i<=3;i++)
        printf("\n %d %d",stud[i][0],stud[i][1]);
}

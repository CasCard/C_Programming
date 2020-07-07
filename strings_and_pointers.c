//
// Created by abel on 07/07/20.
//
#include <stdio.h>
char x[]="this is declared externally\n\n";
char *z="this sting is declared EXTERNALLY\n\n";
main(){
    static char y[]="This string is declared within main";
    char *a="This string is declared within MAIN";
    printf("%s",x);
    printf("%s",y);

    printf("%s",z);
    printf("%s",a);
}

#include <stdio.h>
#include "first.h"

void getName(){
    char name[32];

    printf("What your name?\n");
    scanf("%31s", name);
    printf("Hello %s\n", name);

}

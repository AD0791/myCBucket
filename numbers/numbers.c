#include <stdio.h>

int main()
{
    int x, y, answ;
    printf("What numbers in C\n");
    scanf("%d", &x);
    printf("Another numbers in C\n");
    scanf("%d", &y);

    answ = x + y;

    printf("Lazy addtion %d\n", answ);

    return 0;
}
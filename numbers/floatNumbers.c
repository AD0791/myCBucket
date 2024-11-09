#include <stdio.h>

int main()
{
    float x, y, answ;
    printf("What numbers in C\n");
    scanf("%f", &x);
    printf("Another numbers in C\n");
    scanf("%f", &y);

    answ = x + y;

    printf("Lazy addtion %f\n", answ);

    return 0;
}
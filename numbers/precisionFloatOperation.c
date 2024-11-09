#include <stdio.h>

int main()
{
    double x, y, answ;
    printf("What numbers in C\n");
    scanf("%lf", &x);
    printf("Another numbers in C\n");
    scanf("%lf", &y);

    answ = x + y;

    printf("Lazy addtion %.4lf\n", answ);

    return 0;
}
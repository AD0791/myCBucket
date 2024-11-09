#include <stdio.h>

int area_triangle(int ax, int cot)
{
    return (ax * cot)/2;
}

int main()
{
    int a, c, p;

    printf("first: ");
    fflush(stdout);
    scanf("%d", &a);

    printf("second: ");
    fflush(stdout);
    scanf("%d", &c);

    p= area_triangle(a,c);
    printf("the area is: %d\n",p);

    return 0;

}


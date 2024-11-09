#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int my_random(int seeder)
{
    int x  = rand() % seeder + 1;

    return x;
}


int main()
{
    int random;
    srand(getpid());
    random = my_random(100);
    sleep(10);
    printf("%d\n", random);

    return 0;
}

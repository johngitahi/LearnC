#include <stdio.h>
#include <time.h>

int i;

void counter() {
    for (i = 0; i < 10000; i++) {
        printf("%i\n", i);
    }
}

int main()
{
    clock_t t;
    t = clock();
    counter();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; //in seconds

    printf("counter() took %f seconds to execute \n", time_taken);
    return 0;
}

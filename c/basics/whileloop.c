#include <stdio.h>

int x = 0;
int y = 0;

void fun() {
    while (y < 30) {
        printf("%i\n", y);
        y ++;
    }
}

int main() {
    fun();
    do {
        printf("Success\n");
        x++;
    }
    while (x < 20);
    return 0;
}

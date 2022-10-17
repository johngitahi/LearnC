#include <stdio.h>

// Demo of break/continue statements

void continuest() {
    int i;

    for (i = 0; i < 10; i ++) {
        if (i == 4) {
            continue;
        }
        printf("%i\n", i);
    }
}

int main() {

    continuest();
    int i;
    
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%i\n", i);
    }
}

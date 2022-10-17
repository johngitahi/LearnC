// Testing the switch statements

#include <stdio.h>

int ride = 0;

int main() {
    switch(train) {
        case 1:
            ride += 10;
            break;
        case 2:
            ride += 20;
            break;
        case 3:
            ride += 30;
            break;
        case 4:
            ride += 40;
            break;
        case 5:
            ride += 50;
            break;

        default:
            ride = 100;
    }
}
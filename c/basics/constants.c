#include <stdio.h>

/* 
    Declaring variables with const keyword means the variables remain 
    unchangeable and read-only

    > When declaring a constant variable it must be assigned with a value.
    > It is a best practice to declare constant variables with UPPERCASE.
*/

int main() {
    const int YEAROFBIRTH = 2004;

    printf("YOB: %d \n", YEAROFBIRTH);
}


// const int POSITIONS[] = {11, 33, 55, 77, 99};
/* A pointer is a variable that stores the memory address of another 
 * variable as its value.
 *
 * A pointer variable points to the data type of the same type, and is
 * created with the * operator.
 *
 * Pointers are important in C, since they give you the ability to
 * manipulate the data in the computer's memory - this can reduce the
 * code and improve the perfomance.
 *
 * You can also get the value of the variable the pointer points to,
 * by using the * operator/ dereference operator
 *
 * Pointers should however be stores with care since it is possible
 * to damage data stored in other memory addresses.
 *
 * How pointers are declared:
 *      - int* myNum;
 *      - int *myNum;
 *      - int * myNum; */

#include <stdio.h>

int main() {
    int myAge = 18;
    int* ptr = &myAge; // A pointer variable to store the memory addr of myAge.

    printf("%d\n", myAge); // Output value of myAge
    printf("%p\n", ptr); // Output memory address of myAge with pointer
    printf("%p\n", &myAge); // Output memory addr of myAge
    printf("%d\n", *ptr); // Using the dereference(*) operator

    return 0;
}

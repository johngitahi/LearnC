#include <stdio.h>

// To get a user input use the scanf() function

/* scanf() takes two arguments:
 *      - the format specifier
 *      - the reference operator; &, which stores the memory address of the
 *        variable.
 *
 * Note that you must specify the size of the string/array 
 * and you don't have to specify the reference operator (&) when working
 * with strings in scanf()
 *
 */

int main() {
    int myAge;
    char firstName[20]; // Specify the size of the string first.

    printf("What is your first name ?");

    scanf("%s", firstName);

    printf("When were you born ?\n");

    scanf("%i", &myAge);

    printf("Hello %s, you are %i years old right now. \n", firstName, (2022 - myAge));
}

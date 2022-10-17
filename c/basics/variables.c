#include <stdio.h>

/* Format specifiers to tell compiler what type of
   data a variable is storing
    
   %d/%i - Integers
   %f - Floats
   %c - Characters
   %lf - double
   %s - strings
   %p - pointers

    :Declare multiple variables as follows:
        int x = 5, y = 6, z = 7;

    :Assign same value to multiples variables once:
        int x, y, z;
        x = y = z = 50;

    :Variable naming convention:
        1. Names must begin with a letter or an underscore
        2. Names are case sensitive
        3. Names cannot contain whitespaces or special characters
        4. Names can contain letters, digits and underscores
        5. Reserved words cannot be used as variable names

    :Basic Data types

    Type            Size                Description
    int          2 or 4 bytes       Stores whole numbers without decimals
    float          4 bytes          Sufficient for storing 7 digit decimals
    double         8 bytes          Sufficient for storing 15 digit decimals
    char           1 byte           Stores a single character/letter/number

*/


int main() {
    int myNum = 15;
    int anotherNum = 3;
    float myFloat = 0.99;
    char myChar = 'C';

    printf("Mi numero favorito es %d y mi letra favorito es %c y mi favorito decimal es %f \n\n", myNum, myChar, myFloat);
    
    printf("Summation = %d \n", myNum + anotherNum);
    return 0;
}

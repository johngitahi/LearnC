# include <stdio.h>

int x, y, z;

void operations() {
    x = 100;
    x += 20;
    y = 5;
    y *= 3;
    z = 10;
    z &= 3;
    printf("x+=20: %i; y*=3: %i; z&=3:%i \n", x, y, z);
}

void sizeofop() {
    int myInt = 6;
    float myFloat = 3.142;
    double myDouble = 3.00;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    
    /* 
     * We use the %lu format specifier because we expect the compiler
     * to return a long unsigned integer*/

}

void ternaryop() {
    int x = 33;
    int y = 44;

    // SYNTAX: variable = (condition) ? expressioniftrue : expressionifFalse

    (x < y) ? printf("x is less than y") : printf("y is less than x");
}

int main() {
    operations();
    sizeofop();
    ternaryop();
    printf("Done!\n");
    return 0;
}

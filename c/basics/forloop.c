#include <stdio.h>

/* For-loop syntax:
 * 
 * for (statement1; statement2; statement3) { // code block to execute}
 *
 *  statement1 is executed one time before execution of the code block.
 *  statement2 defines the condition for executing the code block.
 *  statement3 is executed (every time) after the code block runs.
 */

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}

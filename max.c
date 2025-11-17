/*------------------------------------------------------
* Filename: [max.c]
* Description: [This program takes two numbers and puts the bigger number in
  a new variable using obly simple operations and for lines of code.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

int main() {

    int x = 12;
    int y = 11;
    int z = y * (y >= x) + x * (x > y); // each >= operation gives 0 or 1, so by multiplaying by the value we get the max.
    printf("%d", z);
    return 0;
}
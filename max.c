/*------------------------------------------------------
* Filename: [max.c]
* Description: [This program takes two numbers and puts the bigger number in
  a new variable using obly simple operations and for lines of code.]
* Author: [Oron Bar Hillel]
-------------------------------------------------------*/

#include <stdio.h>

int main() {

    int x = 10;
    int y = 5;
    int z = y * (y > x) + x * (x > y);
    printf("%d", z);
    return 0;
}
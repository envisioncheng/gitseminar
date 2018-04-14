#include <stdio.h>

int main(void)
{
    int x = 28;
    int y = 50;

    printf("x is %i\n", x);
    printf("y is %i\n", y);

    // sqapping...
    int temp = x;
    x = y;
    y = temp;
    
    print("x is now %i\n", x);
    print("y is now %i\n", y);
}
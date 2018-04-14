#include <stdio.h>

 void swap(int *a,int *b)
 {
    int temp=*a;
    *a=*b;
    *b=temp; 
 }

int main(void)
{
    int x = 28;
    int y = 50;

    printf("x is %i\n", x);
    printf("y is %i\n", y);

    // sqapping...
    swap(&x,&y);

    print("x is now %i\n", x);
    print("y is now %i\n", y);
}
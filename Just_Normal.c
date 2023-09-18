#include <stdio.h>
int main()
{
    int b = 6;
    int *ptr;
    ptr = &b;
    printf("%d\n", ptr); // print the memory address of the integer b memory
    printf("%d ", *ptr); // print the memory value of integer b memory
    return 0;
}
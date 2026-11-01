#include <stdio.h>
int a = 500;

int main()
{
    printf("global number a = %d\n", a);
    {
        int a = 200;
        printf("local number a = %d\n", a);
    }
    printf("global number a = %d\n", a);
    return 0;
}
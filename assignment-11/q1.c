
/*1. Automatic Local Variables
Write a C program to demonstrate that an automatic variable is created when a block is entered and destroyed when the block is exited.*/
#include <stdio.h>

void display() {
    auto int x = 25;
    printf("outside inner block:%d\n", x);
    {
        auto int x = 10;
        printf("inside inner block:%d\n", x);
    
    }
    printf("outside inner block:%d\n", x);
}
int main() {
    display();
    return 0;
}



#include <stdio.h>

int num = 10;   // Global variable

void display() {
    printf("Value of num = %d\n", num);
}
#include <stdio.h>

extern int num;   // Access global variable from file1.c

void display();

int main() {
    display();

    num = 50;     // Modify using extern

    printf("After modification:\n");
    display();

    return 0;
}
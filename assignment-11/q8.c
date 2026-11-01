#include <stdio.h>

int num = 100;   // Global variable

void display() {
    printf("Value in file1.c = %d\n", num);
}
#include <stdio.h>

extern int num;   // Access num from file1.c

void display();

int main() {
    printf("Value in main.c = %d\n", num);
    display();

    return 0;
}

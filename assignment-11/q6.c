#include <stdio.h>

static int num = 100;

void display() {
    printf("Static global variable = %d\n", num);
}
#include <stdio.h>

void display();

int main() {
    display();

    return 0;
}
#include <stdio.h>
void compare() {
    auto int a = 0;
    static int b = 0;
    a++;
    b++;
    printf("automatic variable a = %d\n", a);
    printf("static variable b = %d\n", b);
}
int main() {
    compare();
    compare();
    return 0;
}
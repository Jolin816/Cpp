
#include <stdio.h>

int main();

int main() {
    int a, b;
    scanf("%d%d", &a, &b); // dont forget the "&" before a and b
                           // %d占位符, here %d%d means scan for two number
    printf("%d\n", a+b);
    return 0;
}
#include <stdio.h>

int main();
void swap(int *a, int *b);

int main() {
    int a=3;
    int b=4;
    swap(&a, &b);
    printf("%d%d", a, b);
    return 0;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

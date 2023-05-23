#include <stdio.h>
#include <math.h>

int main();

int main() {
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);

    if(a>b) {t=a; a=b; b=t;} // after this, garanteed that a<b, now we compare a and c
    if(a>c) {t=a; a=c; c=t;} // after this, a<c, but a<b still works, now we compare b and c
    if(b>c) {t=b; b=c; c=t;}

    printf("%d %d %d\n", a, b, c);

    return 0;
}
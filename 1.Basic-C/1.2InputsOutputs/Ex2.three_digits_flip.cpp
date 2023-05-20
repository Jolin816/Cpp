#include <stdio.h>
#include <math.h>

int main();

int main() {

    int n;
    scanf("%d", &n);
    
    printf("%d%d%d\n", n%10, n/10%10, n/100);

    return 0;

}
#include <stdio.h>
void swap(int &a, int &b);   // & means passing by reference
int main();

int main() {
    int a = 3;
    int b = 4;
    swap(a, b);
    printf("%d%d", a, b);
}

void swap(int &a, int &b) {
    // here eveything is passed by reference, so we are going to the address. 
    int t = a; // dummy address t stores address a and its value
    a = b; // address a becomes address b
    b = t; // address b becomes address t which stores address a
}

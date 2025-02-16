#include <stdio.h>

#include "multi.h"
#include "div.h"

int main() {
    int a = 10;
    int b = 2;
    printf("a * b = %d\n", multi(a, b));
    printf("a / b = %d\n", div(a, b));
    printf("test");
}
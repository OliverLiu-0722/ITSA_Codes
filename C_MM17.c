#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||

int gcd(int a, int b) {
    return a % b ? gcd(b, a % b) : b;
}

int main(){
    int a, b; scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}

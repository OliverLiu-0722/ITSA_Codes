#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define and &&
#define or ||

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d+%d=%d\n"
           "%d*%d=%d\n"
           "%d-%d=%d\n"
           "%d/%d=%d...%d\n",
    a, b, a + b, a, b, a * b, a, b, a - b, a, b, a / b, a % b);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define round(x) (int)((x) + 0.5)

int main(){
    int a;
    scanf("%d", &a);
    printf("NT10=%d\n"
           "NT5=%d\n"
           "NT1=%d",
           a / 10, (a % 10) / 5, a % 5);
}

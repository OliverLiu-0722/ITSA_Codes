#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define round(x) (int)((x) + 0.5)


int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) printf("%d\n", (a + b) * (a + b));
}

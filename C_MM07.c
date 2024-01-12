#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define round(x) (int)((x) + 0.5)


int main(){
    int a;
    while(scanf("%d", &a) != EOF) printf("%d %d %d\n", a, a * a, a * a * a);
}

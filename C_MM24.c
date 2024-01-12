#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||

int main(){
    for(int a, b; scanf("%d%d", &a, &b) != EOF;) printf("%.1lf\n", (double)(a * b + (a - 60) * b * 0.33 * (a > 60) + (a - 120) * b * 0.33 * (a > 120)));
}

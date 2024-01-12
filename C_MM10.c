#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define round(x) (int)((x) + 0.5)

int main(){
    double a;
    while(scanf("%lf", &a) != EOF) printf("%.1lf\n", ((double)round((a * 9 / 5 + 32) * 10)) / 10);
}

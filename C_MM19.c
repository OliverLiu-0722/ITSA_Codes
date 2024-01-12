#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||

int main(){
    for(int a; scanf("%d", &a) != EOF;) printf("%.1lf\n", (double) a * 0.9 * ((a >= 1500) ? 0.79 : ((a > 800) ? 0.9 : 1)));
}

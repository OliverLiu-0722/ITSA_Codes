#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define round(x) (int)((x) + 0.5)

int main(){
    int i;
    while(scanf("%d", &i) != EOF) printf((i > 31) ? "Value of more than 31\n" : "%d\n", 1 << i);
}

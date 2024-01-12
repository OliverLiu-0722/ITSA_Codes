#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||

int main(){
    for(int a; scanf("%d", &a) != EOF;) printf("%d\n", (a / 3) * (a / 3 + 1) / 2 * 3);
}

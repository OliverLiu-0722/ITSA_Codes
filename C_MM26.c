#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||

int main(){
    int a; scanf("%d", &a);
    for (int i = 1; i <= a; ++i) printf("%d*%d=%d\n", i, i, i * i);
}

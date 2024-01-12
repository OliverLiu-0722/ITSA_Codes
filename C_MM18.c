#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||

int main(){
    for(int a; scanf("%d", &a) != EOF;) for (int i = 7; i >= 0; --i) printf("%d", !!((1 << i) & a));
    printf("\n");
}

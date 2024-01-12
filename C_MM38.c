#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    for(int a, b, c; scanf("%d%d%d", &a, &b, &c) != EOF;) printf(a + b + c - max(max(a, b), c) > max(max(a, b), c) ?"fit\n" : "unfit\n");
}

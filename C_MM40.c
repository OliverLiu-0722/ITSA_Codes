#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) printf("%d %c ", i, "=+"[i != n]);
    printf("%d\n", n * (n + 1) / 2);
}

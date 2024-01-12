#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})
int p[] = {6, 28, 496, 8128, 33550336, 2147483647};

int main(){
    int a; scanf("%d", &a);
    for (int i = 0; i < 5; ++i) if(a >= p[i]) printf("%d%c", p[i], "\n "[a >= p[i + 1]]);
}

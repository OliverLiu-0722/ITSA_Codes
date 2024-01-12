#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    for(int a, b, mn, mx; scanf("%d%d", &a, &b) != EOF;) printf("%d\n", ((mn = min(a, b)) + (mx = max(a, b))) * (mx - mn + 1) / 2);
}

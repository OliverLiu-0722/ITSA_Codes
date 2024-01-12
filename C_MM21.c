#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
long long f[25] = {1};
int main(){
    for (int i = 1; i <= 20; ++i) f[i] = f[i - 1] * i;
    for(int a; scanf("%d", &a) != EOF;) printf("%lld\n", f[a]);
}

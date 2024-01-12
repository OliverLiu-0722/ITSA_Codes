#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    for(int a; scanf("%d", &a) != EOF;)for (int i = 1; i <= a / 35; ++i) printf("%d%c", i * 35, "\n "[i != a / 35]);
}

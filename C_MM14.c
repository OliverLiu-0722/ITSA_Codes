#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||


int main(){
    int a, b, c, d, h, m, t; scanf("%d%d%d%d", &a, &b, &c, &d);
    h = c - a, m = d - b, t = h * 60 + m;
    if(t <= 120) printf("%d\n", t / 30 * 30);
    else if(t <= 180) printf("%d\n", (t - 120) / 30 * 40 + 120);
    else printf("%d\n", (t - 240) / 30 * 60 + 280);
}

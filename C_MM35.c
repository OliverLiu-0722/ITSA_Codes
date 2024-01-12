#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    for(int i; scanf("%d", &i) != EOF;) printf("%s Year\n", (!(i % 4) - !(i % 100) + !(i % 400)) ? "Bissextile" : "Common");
}

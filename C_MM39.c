#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    for(int a, b, c, s, x, y, z; scanf("%d%d%d", &a, &b, &c) != EOF;) {
        s = a + b + c, x = min(min(a, b), c), z = max(max(a, b), c), y = s - x - z;
        printf("%s Triangle\n", x + y <= z ? "Not" : x * x + y * y < z * z ? "Obtuse" : x * x + y * y == z * z ? "Right" : "Acute");
    }
}

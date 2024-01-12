#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    int x, y; scanf("%d%d", &x, &y);
    if (x == 0 and y == 0) printf("Origin");
    else if (x == 0) printf("y-axis");
    else if (y == 0) printf("x-axis");
    else if (x > 0 and y > 0) printf("1st Quadrant");
    else if (x < 0 and y > 0) printf("2nd Quadrant");
    else if (x < 0 and y < 0) printf("3rd Quadrant");
    else printf("4th Quadrant");
    printf("\n");
}

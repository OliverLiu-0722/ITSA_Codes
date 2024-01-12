#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define and &&
#define or ||


int main(){
    double a, b, c;
    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF)printf("Trapezoid area:%.1lf\n", (a + b) * c / 2);
    
}

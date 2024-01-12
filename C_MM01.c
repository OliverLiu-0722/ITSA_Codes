#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define and &&
#define or ||


int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) printf("%d\n", (a + b));
}

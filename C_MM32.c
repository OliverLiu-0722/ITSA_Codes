#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||
#define min(a, b) ({(a) < (b) ? (a) : (b);})
#define max(a, b) ({(a) > (b) ? (a) : (b);})

int main(){
    for(int a; scanf("%d", &a) != EOF;) printf((a == 153 or a == 370 or a == 371 or a == 407)? "Yes\n" : "No\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||


int main(){
    int t; scanf("%d", &t);
    printf("%d days\n"
           "%d hours\n"
           "%d minutes\n"
           "%d seconds\n",
           t / 60 / 60 / 24, t / 60 / 60 % 24, t / 60 % 60, t % 60);
}

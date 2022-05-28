#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

void exc(int *x, int *y);

int main(void) {
    int x = 1;
    int y = 2;
    exc(&x,&y);
    printf("X-%d, Y-%d", x,y);
    return 0;
}

void exc(int *x, int *y){
    *x = *y;
    *y = *x;
}
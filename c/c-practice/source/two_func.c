#include <stdio.h>

void butler(void);//先声明...

int main(void) {
    printf("butler \n");
    butler();
    printf("Yes\n");
    return 0;
}

void butler(void){
    printf("sir \n");
}

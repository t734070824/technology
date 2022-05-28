#include <stdio.h>

#define MSG "Im special"

int main(void) {
    char ar[] = MSG;
    const char  *pt = MSG;
    printf("address of im %p \n", "Im special");
    printf("address ar : %p \n", ar);
    printf("address pt : %p \n", pt);
    printf("address MSG : %p \n", MSG);
    printf("address of im %p \n", "Im special");
    return 0;
}


#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];
    printf("name:");
    scanf("%s", name);
    printf("hello %s.%s \n", name, PRAISE);
    printf("%zd--%zd \n", strlen(name), sizeof name);
    printf("praise %zd\n", strlen(PRAISE));
    printf("%zd cells\n", sizeof PRAISE);
    return 0;
}
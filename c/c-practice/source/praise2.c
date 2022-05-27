#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];
    printf("name:");
    scanf("%s", name);
    printf("hello %s.%s", name, PRAISE);
    printf("%zd--%zd", strlen(name), sizeof name);
    printf("praise %zd", strlen(PRAISE));
    printf("%zd cells", sizeof PRAISE);
    return 0;
}

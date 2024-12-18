#include <stdio.h>
#include <string.h>

int main() {
    int sum = 0;
    char str[255];
    int i = 0;

    while (1) {
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            break;
        }
        i ++;
    }
    str[i] = '\0';

    for (i = 0;i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum ++;
        }
    }

    printf("%d\n",sum);
    return 0;
}
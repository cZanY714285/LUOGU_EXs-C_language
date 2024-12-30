#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);

    int huiwen = 1;

    if (len % 2 == 0) {
        for (int i = 0;i < len / 2;i++) {
            if (str[i] != str[len-i-1]) {
                huiwen = 0;
                break;
            }
        }if (huiwen == 1) {
            printf("yes");
        }else {
            printf("no");
        }
    }else {
        for (int i = 0;i < (len-1) / 2;i++) {
            if (str[i] != str[len-i-1]) {
                huiwen = 0;
                break;
            }
        }if (huiwen == 1) {
            printf("yes");
        }else {
            printf("no");
        }

    }
    return 0;
}
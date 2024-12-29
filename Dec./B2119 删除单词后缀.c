#include <stdio.h>
#include <string.h>

int main() {
    char s[32];
    scanf("%s", s);
    int len = strlen(s);

    if (s[len-1] == 'y' && s[len - 2] == 'l') {
        if (len > 2) {
            s[len - 2] = '\0';
        }
    }else if (s[len-1] == 'r' && s[len - 2] == 'e') {
        if (len > 2) {
            s[len - 2] = '\0';
        }
    }else if (s[len-1] == 'g' && s[len - 2] == 'n'
        && s[len - 3] == 'i') {
        if (len > 3) {
            s[len - 3] = '\0';
        }
    }

    printf("%s",s);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[255];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A') {
            printf("T");
        }else if (str[i] == 'T') {
            printf("A");
        }else if (str[i] == 'G') {
            printf("C");
        }else{
            printf("G");
        }
    }
    return 0;
}
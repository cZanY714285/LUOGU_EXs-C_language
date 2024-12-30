#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        char str[20];
        scanf("%s",str);

        if (str[0] <= 'z' && str[0] >= 'a') {
            str[0] -= 32;
        }

        for (int j = 1; j < strlen(str); j++) {
            if (str[j] <= 'Z' && str[j] >= 'A') {
                str[j] += 32;
            }
        }printf("%s\n",str);
    }
    return 0;
}
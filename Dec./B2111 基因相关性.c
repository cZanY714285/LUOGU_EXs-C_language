#include <stdio.h>
#include <string.h>

int main() {
    double target;
    scanf("%lf",&target);

    char a[500];
    scanf("%s",a);

    char b[500];
    scanf("%s",b);

    int sum = 0;
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        if (a[i] == b[i]) {
            sum++;
        }
    }
    double rate = (double)sum/len;

    if (rate >= target) {
        printf("yes");
    }else {
        printf("no");
    }return 0;
}


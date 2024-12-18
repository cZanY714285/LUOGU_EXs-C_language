#include <stdio.h>

int main() {
    int n;
    double x;
    scanf("%lf %d",&x,&n);

    double f = x;
    for (int i = 1; i < n+1; i++) {
        f = x / (i + f);
    }printf("%.2f",f);
    return 0;
}
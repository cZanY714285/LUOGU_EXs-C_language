#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    double sum = 0;

    double a[100];
    for(int i=0;i<n;i++) {
        scanf("%lf",&a[i]);
        sum += a[i];
    }
    printf("%lf",sum / n);

    return 0;
}
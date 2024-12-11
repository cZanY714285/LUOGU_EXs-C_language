#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    float p[31],q[31],arr[31];
    p[1] = 1;
    q[1] = 2;

    double sum = q[1] / p[1];

    for (int i = 2; i <= n; i++) {
        q[i] = q[i - 1] + p[i - 1];
        p[i] = q[i - 1];
        arr[i] = q[i] / p[i];
        sum += arr[i];
    }printf("%.4f",sum);

    return 0;
}
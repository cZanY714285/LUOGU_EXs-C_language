#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int sum_a = 0;
    int sum_b = 0;
    int sum_c = 0;

    int a[100],b[100],c[100];
    for(int i = 1;i <= n;i++) {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        sum_a += a[i];
        sum_b += b[i];
        sum_c += c[i];
    }printf("%d %d %d %d",sum_a,sum_b,sum_c,sum_a + sum_b + sum_c);
    return 0;
}
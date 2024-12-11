#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int sum = 0;

    int qian = 0;
    int bai = 0;
    int shi = 0;
    int ge = 0;

    int a[100];
    for(int i = 1;i <= n;i++) {
        scanf("%d",&a[i]);
        qian = a[i] / 1000;
        bai = a[i] / 100 - qian * 10;
        ge = a[i] % 10;
        shi = (a[i] % 100 - ge) / 10;
        if (ge - qian - bai - shi > 0) {
            sum ++;
        }
    }printf("%d",sum);
    return 0;
}
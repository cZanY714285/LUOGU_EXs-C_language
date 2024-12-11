#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int sum = 0;

    for(int i = n;i <= m;i++) {
        if (i % 17 == 0) {
            sum += i;
            i += 16;
        }
    }printf("%d",sum);

    return 0;
}
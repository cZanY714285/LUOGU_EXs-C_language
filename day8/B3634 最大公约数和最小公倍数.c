#include <stdio.h>
#include <math.h>

int main(){
    long long n,m = 0;
    scanf("%lld %lld", &n,&m);
    if (n > m) {
        int temp = m;
        m = n;
        n = temp;
    }

    if (m % n == 0) {
        printf("%lld %lld", n,m);
    }else {
        for(long long i=n-1 ;i>= 1;i--) {
            if (n % i == 0 && m % i == 0) {
                printf("%lld ", i);
                printf("%lld", m / i * n);
                break;
            }
        }
    }return 0;
}
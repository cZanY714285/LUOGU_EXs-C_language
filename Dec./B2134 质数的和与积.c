# include <stdio.h>
# include <stdbool.h>
# include <math.h>

bool isprime(int n) {
    if (n < 2) {
        return false;
    }for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }return true;
}


int main() {
    int s;
    int max_mul = 0;
    scanf("%d",&s);
    for (int n = 2;n <= s / 2;n ++) {
        if (isprime(n)  && isprime(s - n)) {
            if (max_mul < n * (s - n)) {
                max_mul = n * (s - n);
            }
        }
    }printf("%d",max_mul);
    return 0;
}
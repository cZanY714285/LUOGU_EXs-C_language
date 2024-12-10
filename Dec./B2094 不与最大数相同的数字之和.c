# include <stdio.h>
# include <math.h>

int main() {
    long long max = -1000000;
    long long sum = 0;

    int n;
    scanf("%d",&n);

    long long a[n];
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
        sum += a[i];
        if (max < a[i]) {
            max = a[i];
        }
    }

    int num = 0;
    for(int i=0;i<n;i++) {
        if (max == a[i]) {
            num ++;
        }
    }

    printf("%lld",sum - max * num);
    return 0;
}
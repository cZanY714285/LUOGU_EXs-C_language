#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    double e = 2;

    for (int j = 2; j <= n; j++) {
        double sum = 1;

        for (int i =2 ; i <= j;i++) {
            sum *= i;
        }e += 1/ sum;
    }

    printf("%.10f",e);
    return 0;
}

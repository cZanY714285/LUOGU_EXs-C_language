#include <stdio.h>
#include <math.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    for(int i=n/2 +1;i>= 3;i--) {
        if (n % i == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
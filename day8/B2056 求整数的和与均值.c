#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int a[10000];
    int sum = 0;
    scanf("%d",&n);

    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%d %.5f",sum,(double)sum/n);
    return 0;

}

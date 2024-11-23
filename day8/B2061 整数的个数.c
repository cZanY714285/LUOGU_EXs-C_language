#include <stdio.h>
#include <math.h>

int main(){
    int k;
    scanf("%d\n",&k);
    int a[k];
    int n1 = 0;
    int n5 = 0;
    int n10 = 0;

    for (int i = 0; i < k; i++) {
        scanf("%d",&a[i]);
        if (a[i] == 1) {
            n1++;
        }if (a[i] == 5) {
            n5++;
        }if (a[i] == 10) {
            n10++;
        }
    }

    printf("%d\n",n1);
    printf("%d\n",n5);
    printf("%d\n",n10);
    return 0;
}

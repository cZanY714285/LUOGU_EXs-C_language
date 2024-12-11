#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[100];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 30; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    int a[100];
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]);
        printf("%d\n",arr[a[i] - 1]);
    }
}
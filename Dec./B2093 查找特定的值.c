# include <stdio.h>
# include <math.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int index = -1;
    int x;
    scanf("%d",&x);

    for(int i=0;i<n;i++) {
        if(a[i]==x) {
            index = i;
            break;
        }
    }printf("%d",index);
    return 0;
}
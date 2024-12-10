# include <stdio.h>
# include <math.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    int longest = 1;
    int length = 1;
    for(int i=0;i<n-1;i++) {
        if (a[i] == a[i+1]) {
            length ++;
        }else {
            if (length > longest) {
                longest = length;
            }length = 1;
        }
    }
    printf("%d",longest);
    return 0;
}
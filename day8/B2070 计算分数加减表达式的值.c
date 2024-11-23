#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    double s = 0;
    for(int i=1;i<=n;i++) {
        if (i % 2 == 0) {
            s -=(double) 1 / i;
        }else {
            s += (double)1 / i;
        }
    }printf("%.4f\n",s);
    return 0;
}
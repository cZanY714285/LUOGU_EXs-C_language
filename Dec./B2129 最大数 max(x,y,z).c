#include <stdio.h>

int max(int x,int y,int z) {
    if (x > y && x > z) {
        return x;
    }else if (y > x && y > z) {
        return y;
    }else {
        return z;
    }
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    double m = 0;
    m = (double)max(a,b,c) /
        (max(a + b,b,c) * max(a,b,b+c));

    printf("%.3f\n",m);
    return 0;
}
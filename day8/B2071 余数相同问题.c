#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x,y,z = 0;
    for (int n = 2;n <= a && n <= b && n <= c;n++) {
        x = a % n;
        y = b % n;
        z = c % n;
        if(x == y && y == z) {
            printf("%d",n);
            break;
        }
    }
    return 0;

}

#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%.3f%%",(float)b / a * 100);


    return 0;
}
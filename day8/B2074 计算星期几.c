#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    int n = 0;
    scanf("%d %d",&a,&b);
    //printf("a = %d\n",a);
    //printf("b = %d\n",b);

    n = a % 7;
    for (int i =1; i<b; i++) {
        n *= a;
        n %= 7;
    }//printf("%d\n",n);

    switch(n) {
        case 0:
            printf("Sunday");
        break;
        case 1:
            printf("Monday");
        break;
        case 2:
            printf("Tuesday");
        break;
        case 3:
            printf("Wednesday");
        break;
        case 4:
            printf("Thursday");
        break;
        case 5:
            printf("Friday");
        break;
        case 6:
            printf("Saturday");
        break;
    }

    return 0;
}

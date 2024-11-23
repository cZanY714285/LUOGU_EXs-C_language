#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double x1,x2 = 0;
    double temp = 0;
    if (b * b - 4 * a * c == 0) {
        printf("x1=x2=%.5f",-b / (2 * a));
    }else if (b * b - 4 * a * c <= 0) {
        printf("No answer!");
    }else {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        if (x1 > x2) {
            temp = x2;
            x2 = x1;
            x1 = temp;
        }printf("x1=%.5f;x2=%.5f",x1,x2);
    }
    return 0;
}
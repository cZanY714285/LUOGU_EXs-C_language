# include <stdio.h>
# include <math.h>

int main() {
    double temp = 0;
    double x = 0;
    double x1,x2 = 0;

    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("No answer!");
    }else if (delta == 0) {
        x = - b / (2 * a);
        printf("x1=x2=%.5f",x);
    }else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2) {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }printf("x1=%.5f;x2=%.5f",x1,x2);
    }

    return 0;
}
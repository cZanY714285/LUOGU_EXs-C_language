#include <stdio.h>

int plus(int a,int b) {
    return a+b;
}

int minus(int a,int b) {
    return a-b;
}

int times(int a,int b) {
    return a*b;
}

int divide(int a,int b) {
    return a/b;
}

int remainder(int a,int b) {
    return a%b;
}

int main() {
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);

    if (op == '+') {
        printf("%d",plus(a,b));
    }else if (op == '-') {
        printf("%d",minus(a,b));
    }else if (op == '*') {
        printf("%d",times(a,b));
    }else if (op == '/') {
        printf("%d",divide(a,b));
    }else {
        printf("%d",remainder(a,b));
    }

    return 0;
}
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, h, bok, P, S, L;
    printf("Введите длину нижнего основания:");
    scanf("%f", &a);
    printf("Введите длину верхнего основания:");
    scanf("%f", &b);
    printf("Введите длину высоты:");
    scanf("%f", &h);
    bok = sqrt(h * h + ((b - a) / 2) * ((b - a) / 2));
    P = a + b + 2 * bok;
    S = (a + b) * h / 2;
    L = (a + b) / 2;
    printf("Периметр: %f \n", P);
    printf("Площадь: %f \n", S);
    printf("Длина средней линии: %f \n", L);
    return 0;
}
#include <iostream>
#include <cmath>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Введите высоту\n");
    int h;
    std::cin >> h;
    printf("Введите длинну\n");
    int l;
    std::cin >> l;
    int P = h * 2 + l * 2; int S = h * l; float diag = pow(h * h + l * l, 0.5);
    printf("Периметр = %d\nПлощадь = %d\nДлинна диагонали = %.2f", P, S, diag);
}

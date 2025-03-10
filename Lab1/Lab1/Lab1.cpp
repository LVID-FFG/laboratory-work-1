#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

void Square() // Лисовский
{
    float h = 0;
    cout << "Введите высоту, для дробей используйте точку\n";
    cin >> h;
    if (h <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    float l = 0;
    cout << "Введите длинну\n";
    cin >> l;
    if (l <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    } 
    float P = h * 2 + l * 2, S = h * l, diag = sqrt(h * h + l * l);
    printf("Периметр = %.2f\nПлощадь = %.2f\nДлинна диагонали = %.2f\n", P, S, diag);
}
void Trapezoid() { //Подземельный
    float a, b, h, bok, P, S, L;
    cout << "Введите длину нижнего основания, для дробей используйте точку\n";
    cin >> a;
    if (a <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    cout << "Введите длину верхнего основания, для дробей используйте точку\n";
    cin >> b;
    if (b <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    cout << "Введите длину высоты, для дробей используйте точку\n";
    cin >> h;
    if (h <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    
    bok = sqrt(h * h + ((b - a) / 2) * ((b - a) / 2));
    P = a + b + 2 * bok;
    S = (a + b) * h / 2;
    L = (a + b) / 2;
    printf("Периметр: %f \n", P);
    printf("Площадь: %f \n", S);
    printf("Длина средней линии: %f \n", L);
}

void Triangle(){ // Несов
    float S, s, x, y, z, P, p;
    cout << "Введите длины сторон через Enter:\n";
    cin >> x;
    if (x <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    cin >> y;
    if (y <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    cin >> z;
    if (z <= 0 || cin.fail()) {
        cout << "Неверное значение, перезапустите программу\n";
        exit(0);
    }
    P = x + y + z;
    p = P / 2;
    S = p * (p-x) * (p-y) * (p-z);
    s = round(pow(S, 0.5));
    cout << "Периметр: "<< P << " " << "Полупериметр: " << " " << p << "Площадь: " << s << endl;
}

int main() {

    setlocale(LC_ALL, "Russian");
    enum choice {SQR = 1, TRAP, TRIA, EXIT};
    int x;
    while(1){
        cout << "Выберете фигуру\n1 - прямоугольник\n2 - трапеция\n3 - треугольник\n4 - выход из программы\n";
        cin >> x;
        switch (x) {
        case EXIT:
            cout << "Программа завершена\n";
            exit(0);
        case SQR:
            Square();
            break;
        case TRAP:
            Trapezoid();
            break;
        case TRIA:
            Triangle();
            break;
        default:
            cout << "Неверное значение, перезапустите программу\n";
            exit(0);
        }
    }
}

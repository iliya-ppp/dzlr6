#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    float x, y;

    printf("Введите координаты x и y: ");
    scanf("%f %f", &x, &y);

    if (x >= 0 && ((y >= 0 && (x * x + y * y <= 25)) || (y < 0 && (y >= x - 5)))) 
    {
        printf("Точка принадлежит области\n");
    }
    else 
    {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}

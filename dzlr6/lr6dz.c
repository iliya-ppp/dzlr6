#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, sum = 0, x; 

    printf("введите число N: ");
    if (scanf("%d", &n) != 1) {
        printf("ошибка \n");
        return 1;
    }
    x = abs(n);
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    if (sum % 3 == 0) {
        printf("сумма цифр числа (%d) кратна трем\n", sum);
    }
    else {
        printf("сумма цифр числа (%d) не кратна трем\n", sum);
    }

    return 0;
}

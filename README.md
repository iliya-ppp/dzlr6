# Лабораторная работа 6

## Условие задачи
Проверка принадлежности точки с координатами `(x, y)` закрашенной области (**Вариант 18**: ограничена осью Y, четвертью окружности радиуса 5 и прямой линией). Полный текст условий, контрольных примеров и пояснений вы можете найти в исходных материалах репозитория.

## 1. Алгоритм
1. Ввод координат `x` и `y`.
2. Проверка условий: `x >= 0`. При этом:
   - для `y >= 0` — проверка попадания в четверть круга (x^2 + y^2 <= 25)
   - для `y < 0` — проверка положения выше прямой (y >= x - 5)
3. Вывод соответствующего сообщения.

## 2. Блок схема
<img width="403" height="568" alt="image" src="https://github.com/user-attachments/assets/f28b7527-ff48-4056-a610-5507d748c1b6" />
https://app.diagrams.net/#LLR6.drawio#%7B%22pageId%22%3A%22q8SQM7Rj3icF_kb-cwUK%22%7D

## 3. Реализация программы
```c
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
```

## 4. Результаты работы программы
<img width="362" height="74" alt="image" src="https://github.com/user-attachments/assets/5b4e8565-c2e4-4cce-b718-ec61c9da3248" />
<img width="338" height="70" alt="image" src="https://github.com/user-attachments/assets/c522a1d6-9a2b-4a1b-945b-afca62cc05d2" />



## 5. Выполнил
Мамонов Илья бИЦТ-261



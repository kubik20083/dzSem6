// Задача 4. Все нечетные
// Дана последовательность целых чисел через пробел, завершающаяся числом 0.
// Выведите все нечетные числа из этой последовательности, сохраняя их порядок.

#include <stdio.h>
void oddNumbers(void);
int main()
{
    printf("Enter natural number: \n");
    
    oddNumbers();
    
    return 0;
}

void oddNumbers(void)
{
    int a;
    scanf("%d", &a);
    if (a == 0)
        return;
    if (a % 2 != 0)
        printf("%d ", a);
    oddNumbers();
}
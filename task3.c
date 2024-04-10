// Задача 3. Количество 1
// Дано натуральное число N. Посчитать количество «1» в двоичной записи числа. 
#include<stdio.h>

int numberOfUnits(int n);
int main()
{
    int n;
    printf("Enter natural number: \n");
    scanf("%d", &n);
    printf("number of ones in binary form %d\n", numberOfUnits(n));
    return 0;
}

int numberOfUnits(int n)
{
    if (n / 2 == 0)
        return n % 2;
    return n % 2 + numberOfUnits(n / 2);
}
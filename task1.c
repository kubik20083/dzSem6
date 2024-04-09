// Задача 1. В прямом порядке

#include<stdio.h>

void printNum (int);


int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    printNum(a);
    
    return 0;
}


void printNum (int n)
{
    if (n >= 10)
        printNum(n / 10);
    printf("%d\n", n % 10);
}
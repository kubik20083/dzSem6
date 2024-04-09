// Задача 2. От A до B. Составить рекурсивную функцию, Выведите все числа от A до B
// включительно, в порядке возрастания, если A < B, или в порядке убывания в противном
// случае.

#include<stdio.h>

void ab (int, int);

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    ab(a, b);
    return 0;
}


void ab (int a, int b)
{
    if(a == b) 
    {
        printf("%d ", a);
    }
        
    else if (a < b)
    {
        printf("%d ", a++);
        ab(a, b);
    }     
    else
    {
        printf("%d ", a--);
        ab(a, b);
    }   
    
}
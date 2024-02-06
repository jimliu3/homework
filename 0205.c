#include <stdio.h>
void nine(int (*a)[9])                           
{
    for (int i = 1; i <= 9; i++) 
    {
        for (int j = 1; j <= 9; j++) 
        {
            a[i-1][j-1] = i * j;
        }
    }
}

void swap(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int (*a)[9]) 
{
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            swap(&a[i][j], &a[i][8-j]);
        }
    }
}
void print(int (*a)[9]) 
{
    printf("9*9¡G\n");
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int a[9][9];
    
    nine(a);
    printf("Origanl¡G\n");
    print(a);


    
    reverse(a);
    printf("Swap¡G\n");

    print(a);

    return 0;
}




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

void print(int (*a)[9]) 
{
    printf("九九乘法表：\n");
    for (int i = 1; i <= 9; i++) 
	{
        for (int j = 1; j <= 9; j++) 
		{
            printf("%d\t", a[i-1][j-1]);
        }
        printf("\n");
    }
}

int main() {
    int a[9][9];
    nine(a);
    print(a);
    return 0;
}

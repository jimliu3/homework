#include <stdio.h>
#include <stdlib.h>

void search(int *);

int main(void)
{
   
   int array[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
      
   printf("陣列元素個數:%d\n",sizeof(array)/sizeof(int));
   search(array);
     
   system("pause");
   return 0; 
}

void search(int *arr) 
{
   int i,j=0;
    for (i=0;i<13;i++) 
     {
	   if (*(arr+i)>=3 && *(arr+i)<=6 )
        j++;
     }
    printf("介於3~6元素共有:%d\n",j);    
}
     
     
                  		
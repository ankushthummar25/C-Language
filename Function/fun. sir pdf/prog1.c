#include<stdio.h>
int fun(int A[100],int i)
{
    
     while(A[i]!=0)
        {
            i++;
        }     
		printf("\n");
     
  
     while(i>=0)
     {
         printf("%d ",A[i]);
         i--;
     }
        
     
     return i;
}

int main()
{
    int A[100];
    int i=0;
    scanf("%d",&A[100]);
     fun(A,i);

     return 0;
}

#include<stdio.h>
int fibo(int i,int n)
{
    int a=0,b=1,c=0;

    for(i=1 ; i<n ; i++)
    {
         
        a=b;
        b=c;
        c=a+b;
     printf("%d ",c);

    }
    return c;
}

int main()
{
    int i,n,c;
    printf("Enter The Number: ");
    scanf("%d",&n);
    printf("%d\n",0);

   fibo(i,n);

    return 0;
}
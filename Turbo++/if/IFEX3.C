#include<stdio.h>
int main()
{
	int a;
	printf("Value Divisible by 5 or Not a:");
	scanf("%d",&a);

       if(a%5==0)
       {
       printf("%d divisible by 5",a);
       }
       if(a%5!=0)
       {
       printf("%d Not divisible by 5",a);
       }
       return 0;
}
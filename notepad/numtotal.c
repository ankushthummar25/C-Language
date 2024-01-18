// sum of number digits

#include<stdio.h>

int main()
{
    int n,total=0;

    printf("Enter The Number : ");
    scanf("%d",&n);
   
   while(n!=0)
   {
        total += n%10;
        n = n/10;
   }
   printf("Sum = %d\n",total);

}

/*

Enter The Number : 2468       
Sum = 20

*/


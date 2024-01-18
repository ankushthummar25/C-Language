#include<stdio.h>

int sum()
{
    int i,total=0;
    for(i=1; i<=10; i++)
    {
        total =total +i;
    }
   return total;
}

int main()
{
    int total=0;
    total = sum();
    printf("Total = %d",total);

    return 0;

}

/*

Total = 55

*/
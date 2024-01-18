#include<stdio.h>

void total()
{
    int i,total=0;
    for(i=1; i<=10; i++)
    {
        total =total +i;
    }
    printf("Total = %d",total);
}

int main()
{
    total();

    return 0;

}

/*

Total = 55

*/
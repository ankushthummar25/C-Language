#include<stdio.h>

void re()
{
    int i;
    for(i=10; i>=1; i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    re();

    return 0;
}

/*

10	9	8	7	6	5	4	3	2	1

*/
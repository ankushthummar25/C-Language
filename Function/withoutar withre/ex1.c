#include<stdio.h>

int re()
{
    int i;
    for(i=10; i>1; i--)
    {
        printf("%d\t",i);
    }
    return i;
}

int main()
{
    int i;
   i= re();
   printf("%d",i);

    return 0;
}

/*

10	9	8	7	6	5	4	3	2	1

*/
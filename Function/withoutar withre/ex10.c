#include<stdio.h>

int b()
{
    int i,b=0;
    

    for(i=1; i<=5; i++)
    {
        printf("%d\t",i*i);
    }
    return i;
}

int main()
{
    b();
    

    return 0;
}

/*

1	4	9	16	25	

*/
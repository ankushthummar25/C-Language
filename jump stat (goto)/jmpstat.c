// goto ( jump statement )

#include<stdio.h>
int main()
{
    int i=1;
    aks:

    if(i<=15)
    {
        printf("%d ",i);
        i++;
        goto aks;
    }
    return 0;
}

/*

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 

*/
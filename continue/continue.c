// continue


#include<stdio.h>
int main()
{
    for(int i=1 ; i<=15 ; i++)
    {
        if(i==4 || i==8)
        {
            continue;
        }
        printf("%d ", i);
    }
}


/*

1 2 3    5 6 7    9 10 11 12 13 14 15 

*/
#include<stdio.h>
 
int main()
{
    int i=1,j;
 
    do
    {
		j=i;
        do
        {
            printf("%c ",j+64);
			j--;
        }while(j>=1);
        printf("\n");
		i++;
    }while(i<=5);
	return 0;
}

/*

A
B A
C B A
D C B A
E D C B A

*/
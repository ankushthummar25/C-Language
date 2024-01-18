#include <stdio.h>
int main()
{
    int i=1, j;
    
	do
    {
        j=i;
		do
        {
            printf("%d ",j%2);
			j--;
        }while(j>=1);
        printf("\n");
		i++;
    }while(i<=5);
    return 0;
}

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1


*/
#include<stdio.h>

void event()
{
    int a,n,sum=0;
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        if(a%2==0)
        {
            sum+=a;
        }
        printf("%d \n",sum);
    }
}

int main()
{
    event();

    return 0;
}

/*

2
6
12
20
30

*/
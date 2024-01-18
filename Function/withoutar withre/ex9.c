#include<stdio.h>

int event()
{
    int a,n,sum=0;
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        if(a%2==0)
        {
            sum+=a;
        }
    }
    return sum;
}

int main()
{
    int sum=0;
    sum=event();
    printf("%d \n",sum);

    return 0;
}

/*

10

30

*/
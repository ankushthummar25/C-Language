#include<stdio.h>

void oddt()
{
    int a,n,sum=0;
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        if(a%2!=0)
        {
            sum+=a;
        }
        printf("%d \n",sum);
    }
}

int main()
{
    oddt();

    return 0;
}

/*

1
4
9
16
25

*/
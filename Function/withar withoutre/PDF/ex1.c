#include<stdio.h>

int main()
{
    int n,r=0;

    printf("Enter a Number To :");
    scanf("%d",&n);

    while(n!=0)
    {
        r=r*10;
        r=r+n%10;
        n=n/10;
    }

    printf("Reverse of The Number = %d ",r);

    return 0;
}

/*

Enter a Number To :1234567890
Reverse of The Number = 987654321 

*/
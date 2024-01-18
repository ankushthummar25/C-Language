#include<stdio.h>

void cs()
{
    char i,a;
    printf("Enter the Value:");
    scanf("%c",&i);

    if(i>=65 && i<=90)
    {
        printf("%c is Answer",i+32);
    }else if(i>=97 && i<=122)
         {
             printf("%c is Answer",i-32);
        }
}

int main()
{
    cs();

    return 0;
}

/*

Enter the Value:A
a is Answer

Enter the Value:a
A is Answer

*/
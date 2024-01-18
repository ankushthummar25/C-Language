#include<stdio.h>
void leap(int a,int b, int c)
{
	
	if(a>b&&a>c)
	{
	printf("%d is Greatest",a);
	}
	    if(b>a&&b>c)
	    {
	    printf("%d is Greatest",b);
	    }
	        if(c>a&&c>b)
	        {
	        printf("%d is Greatest",c);
	        }
 }

 int main()
 {
    int a,b,c;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	printf("Value of c:");
	scanf("%d",&c);

    leap(a,b,c);

    return 0;

 }


 /*
 
Value of a:90
Value of b:87
Value of c:76
90 is Greatest


Value of a:87
Value of b:90
Value of c:67
90 is Greatest


Value of a:20
Value of b:67
Value of c:87
87 is Greatest

 */


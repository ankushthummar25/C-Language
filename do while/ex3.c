#include <stdio.h>
int main()
{
    int a=1,n,sum =0;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	
	do
	{
		if(a%2==0)
		{
           sum+=a;
		
        }	
			
		a++;
	}while(a<=n);
	
		printf("  %d",sum);	
		
	return 0;
	}
	
	
/*

	30
	
*/

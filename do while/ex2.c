#include <stdio.h>
int main()
{
    int i=1,n,sum =0;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	do
	{
		if(i%2==1)
		{
           sum+=i;
        }		   
			
		i++;
	}
	while(i<=n);
		printf("%d",sum);
	return 0;
	}
	
	
/*

  25
  
*/
#include <stdio.h>
int main()
{
    int a,n,sum =0;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		if(a%2==0)
		{
           sum+=a;
        }		   
			
	}
		printf("%d",sum);
	return 0;
	}
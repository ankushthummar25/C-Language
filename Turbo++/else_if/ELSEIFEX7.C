#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Marks:");
	scanf("%d",&a);


	if(a>75)
	{
	printf("%d Grade A",a);
	}else if(a>60)
		{
		printf("%d Grade B",a);
		}else if(a>45)
			{
			printf("%d Grade C",a);
			}else if(a>35)
				{
				printf("%d Grade D",a);
				}else
				{
				printf("%d is Fail",a);
				}

 return 0;
 }
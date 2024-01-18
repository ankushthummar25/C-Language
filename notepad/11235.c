#include<stdio.h>
int main()
{ 
	int i,n,a=1,b=0,c=0;
	
	printf("Enter the Number:");
	scanf("%d",&n);

	for(i=3;i<=n;i++)
	{
		printf("%d\n",c);
			c=a+b;
			a=b;
			b=c;
	}
	
	return 0;
}

/*

Enter the Number:10

0
1
1
2
3
5
8
13


*/
#include<stdio.h>
#define n 5

void plus(int arr[])
{

    int f;
    printf("\n");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);

            if (i!=n-1)
            {
                f=arr[i]+arr[i+1];
                printf("  %d\t\n",f);
            }else
                {
                    printf("\n");
                }
	}
}

int main()
{
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter Vaue:");
		scanf("%d",&a[i]);   
	}

	plus(a);
}

/*

Enter Vaue:1
Enter Vaue:2
Enter Vaue:3
Enter Vaue:4
Enter Vaue:5

1   3
2   5
3   7
4   9
5

*/
// array pass into function as argument 

#include<stdio.h>
#define n 5

void display(int arr[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
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
	display(a);
}

/*

Enter Vaue:5
Enter Vaue:4
Enter Vaue:3
Enter Vaue:2
Enter Vaue:1
5 4 3 2 1

*/






//   maximum number and minimum number

/*   10
	 20  30
	 30  50
	 40  70
	 50  90
	 
*/
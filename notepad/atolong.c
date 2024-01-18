#include<stdio.h>
int main()
{
    char i,a;
    printf("enter the value:");
	scanf("%c",&i);
	
	if(i>=65 && i<=90)
	{
	printf("%c is answer",i+32);
	}else if(i>=97 && i<=122)
	{
		
		printf("%c",i-32);
	}
	
	return 0;
}

/*

enter the value:a
A

enter the value:A
a is answer

*/
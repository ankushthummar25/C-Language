#include<stdio.h>
int main()
{
    char str[100];
    char str2[100];
    
    gets(str);
    gets(str2);
	
	
	int i=0;
	int j=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("\n");
	
	for(j=0; str2[j]!='\0' ; j++,i++)
	{
		str[i]=str2[j];
	}
	

	
	printf("%s",str);
	
    return 0;
}


/*

Skill
Qode

Skill  Qode

*/
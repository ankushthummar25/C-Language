#include <stdio.h>
int main()
{
    char i;
	int a=65,b=97; 
	
	for(i=1;i<=13;i++)
	{
		if(i%2==1)
		{
			printf("%c\n",a);
			a+=2;
			b+=2;
		}else
			{
				printf("%c\n",b);
				b+=2;
				a+=2;
			}
	}
return 0;
}  


/*

=> No 2: 

#include<stdio.h>
int main()
{
    int i;

    for(i=65 ; i<=90 ; i++)
    {
        // printf("%d ", i%2);
        if(i%2==1)
        {
            printf("%c ",i);
        }else
        {
            printf("%c ",i+32);
        }
        
    }

}

/*

A b C d E f G h I j K l M n O p Q r S t U v W x Y z 

*/




/*

A
c
E
g
I
k
M
o
Q
s
U
w
Y

*/

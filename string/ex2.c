#include<stdio.h>
int main()
{
    char str[100];
     gets(str);
     
       
     int i=0;
     
     while(str[i]!='\0')
        {
            i++;
        }     
		printf("\n");
     
  
     while(i>=0)
     {
         printf("%c ",str[i]);
         i--;
     }
        
     
     return 0;
}



/*

Skill

l l i k S

*/
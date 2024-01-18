#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[500];
    fp = fopen("abc.txt","r");

    while(fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s ",buff);
    }
    fclose(fp);
}



/*

abc.txt => file
Welcome To Skill Qode We are Learning C Languge Now 

*/
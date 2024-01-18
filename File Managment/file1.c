/*
    write(w) => File Write => w+ ( replace )
    append => a ( concate )
    read => r
*/

#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w+");
    fprintf(fp,"Welcome To Skill Qode\n");
    fputs("We are Learning C Language Now\n",fp);
    fclose(fp);
}


/*

abc.txt  => file

*/
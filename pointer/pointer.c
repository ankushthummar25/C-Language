// pointer ( Refernce Variable ) => Store to data for another variable address

#include<stdio.h>
int main()
{
    int a=50, *p;
    p = &a;

    printf("Value of a is : %d\n",a);
    printf("Address of a is : %u\n",&a);
    printf("Address of p is : %d\n",p);
    printf("Address of p is : %u\n",&p);
    printf("Address of p is : %d\n",*p);

    return 0;
}


/*

Value of a is : 50
Address of a is : 6356764
Address of p is : 6356764
Address of p is : 6356760
Address of p is : 50

*/
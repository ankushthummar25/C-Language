// Switch case => Number / Char

#include<stdio.h>
int main()
{
    int a=200 , b=50 ,cg;

    printf("1. Add\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Division\n");
    printf("Enter The Choice: ");
    scanf("%d",&cg);

    switch(cg)
    {
        case 1:
            printf("Addition is: %d\n",a+b);
            break;
        
        case 2:
            printf("Substract is: %d\n",a-b);
            break;
        
        case 3:
            printf("Multiply is: %d\n",a*b);
            break;
        
        case 4:
            printf("Division is: %d\n",a/b);
            break;
        
        default:
            printf("Wrong Choice");
            break;
        
        

    }
    return 0;
}



/*

1. Add
2. Substract      
3. Multiply       
4. Division       
Enter The Choice: 3
Multiply is: 10000 


1. Add
2. Substract
3. Multiply
4. Division
Enter The Choice: 6
Wrong Choice

*/
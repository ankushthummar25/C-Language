// structure => collection of diffrent data types

#include<stdio.h>
struct student{
    int rollno;
    char name[50];
    int math,sci,eng,total;
    float per;
};

int main()
{
    struct student a[5];
    int i;
    for(i=0 ; i<2 ; i++)
    {
        printf("enter Roll No: ");
        scanf("%d",&a[i].rollno);
        printf("enter Name: ");
        scanf("%s",&a[i].name);
        printf("enter Maths Marks: ");
        scanf("%d",&a[i].math);
        printf("enter Science marks: ");
        scanf("%d",&a[i].sci);
        printf("enter English Marks: ");
        scanf("%d",&a[i].eng);
        printf("\n");
    }
    printf("\nRoll No\t\tName\tMath\tScience\tEnglish\tTotal\tPercentage");

    for(i=0 ; i<2 ; i++)
    {
        a[i].total =  a[i].math + a[i].sci + a[i].eng ;
        a[i].per = a[i].total*0.2;
        printf("\n%d\t\t%s\t%d\t%d\t%d\t%d\t%f",a[i].rollno,a[i].name,a[i].math,a[i].sci,a[i].eng,
        a[i].total,a[i].per);
    }
    return 0;
}

/*

enter Roll No: 42
enter Name: Ankush
enter Maths Marks: 78
enter Science marks: 89
enter English Marks: 98

enter Roll No: 30
enter Name: piyush
enter Maths Marks: 76
enter Science marks: 65
enter English Marks: 78


Roll No         Name    Math    Science English Total   Percentage
42              Ankush  78      89      98      265     53.000000
30              piyush  76      65      78      219     43.799999

*/
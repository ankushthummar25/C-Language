#include<stdio.h>

int stat;
int ac;
int eco;
int sp;
int guj;
int eng;
float per;
int total;

void stu()
{
    printf("Enter stat marks: ");
    scanf("%d",&stat);
    printf("\n");

    printf("Enter ac marks: ");
    scanf("%d",&ac);
    printf("\n");

    printf("Enter eco marks: ");
    scanf("%d",&eco);
    printf("\n");

    printf("Enter sp marks: ");
    scanf("%d",&sp);
    printf("\n");

    printf("Enter guj marks: ");
    scanf("%d",&guj);
    printf("\n");

    printf("Enter eng marks: ");
    scanf("%d",&eng);
    printf("\n");


}

void plus()
{
    
     total = stat+ac+eco+sp+guj+eng;
    printf("Total = %d\n",total);

}

void perc()
{
    
    per = total*100/600;
    printf("Per.. = %f",per);

}

int main()
{
    stu();
    plus();
    perc();

    return 0;

}

/*

Enter stat marks: 89

Enter ac marks: 93

Enter eco marks: 87

Enter sp marks: 99

Enter guj marks: 88

Enter eng marks: 97

Total = 553
Per.. = 92.000000

*/
#include<stdio.h>
int main()
{
int hin = 89;
int eng = 68;
int sci = 78;
int math = 85;
int total;
float  per;

printf("%d\n",hin);
printf("%d\n",eng);
printf("%d\n",sci);
printf("%d\n",math);

total = hin+eng+sci+math;

printf("%d\n",total);

per = (total*100)/400;

printf("%f\n",per);

  return 0;
}
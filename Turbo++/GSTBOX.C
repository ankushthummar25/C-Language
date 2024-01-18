#include<stdio.h>

int main()
{
int billamt = 9500;
float gst;

gst = billamt*0.18;

printf("\n\nRate");
printf("\tqty");
printf("\tamt");
printf("\tdis5%");
printf("\tbill amt");
printf("\tgst18%");
printf("\t\tBill Net");
printf("\n50");
printf("\t200");
printf("\t10000");
printf("\t500");
printf("\t9500");
printf("\t\t%f",gst);
printf("\t%f",gst+9500);
return 0;
}

#include<stdio.h>
struct bill{
    char name[50];
    float dis,gst;
    int rate,qty,amt,billamt,billnet,srno;
};

int main()
{
    struct bill a[5];
    int i;
    for(i=0 ; i<2 ; i++)
    {
        printf("Enter the Serial No : ");
        scanf("%d",&a[i].srno);
        
        printf("Enter the Product Name : ");
        scanf("%s",&a[i].name);

        printf("Enter the Rate : ");
        scanf("%d",&a[i].rate);
        
        printf("Enter the qty : ");
        scanf("%d",&a[i].qty);

        printf("\n");
        
    }

    printf("\nsrno\tname\tRate\tQty\tAmt\tDis\t\tBillAmt\t\tGST\t\tTotal");


    for(i=0 ; i<2 ; i++)
    {
        a[i].amt     = a[i].rate*a[i].qty;
        a[i].dis     = a[i].amt*0.05;
        a[i].billamt = a[i].amt-a[i].dis;
        a[i].gst     = a[i].billamt*0.18;
        a[i].billnet = a[i].gst + a[i].billamt;

        printf("\n%d\t%s\t%d\t%d\t%d\t%0.2f\t\t%d\t\t%0.2f\t\t%d",a[i].srno,
        a[i].name,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,
        a[i].gst,a[i].billnet);
    }
    return 0;
}

/*

Enter the Serial No : 101
Enter the Product Name : Milk
Enter the Rate : 25
Enter the qty : 100

Enter the Serial No : 113
Enter the Product Name : coke
Enter the Rate : 35
Enter the qty : 200

srno    name    Rate    Qty     Amt     Dis             BillAmt         GST             Total
101     Milk    25      100     2500    125.00          2375            427.50          2802
113     coke    35      200     7000    350.00          6650            1197.00         7847

*/
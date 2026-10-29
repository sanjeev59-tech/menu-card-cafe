#include<stdio.h>
int main()
{
    int opt,total=0,payment;
    int classic_chai=0,coffee=0,mocha=0;
    int vada_pav=0,veg_puff=0,masala_chai=0,burger=0;

    printf("<-----WELLCOME TO CHAI POINT CAFE----->\n");
    printf("1.classic chai=110\n2.coffee=220\n3.mocha=185\n4.vada pav=150\n5.veg puff=119\n6.masala chai=125\n7.burger=99\n");
do{
    printf("Enter your choice:");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1:printf("Classic chai\n");
        classic_chai++;
        total=total+110;
        break;

        case 2:printf("Coffee\n");
        coffee++;
        total=total+220;
        break;

        case 3:printf("mocha\n");
        mocha++;
        total=total+185;
        break;

        case 4:printf("Vada pav\n");
        vada_pav++;
        total=total+150;
        break;

        case 5:printf("veg puff\n");
        veg_puff++;
        total=total+119;
        break;

        case 6:printf("masala chai\n");
        masala_chai++;
        total=total+125;
        break;

        case 7:printf("burger\n");
        burger++;
        total=total+99;
        break;

        case 0:printf("preparing your final bill...\n");
        break;

        default:printf("Invalid choice! please select 0 to 7.\n");
    }
    printf("Thankyou,visit again\n");
}
while(opt !=0);
printf("===FINAL BILL===\n");

if (classic_chai > 0)
  printf("Classic chai x %d = RS.%d\n",classic_chai,classic_chai * 110);

  if (coffee > 0)
        printf("Coffee        x %d = Rs.%d\n",
               coffee, coffee * 220);

    if (mocha > 0)
        printf("Mocha         x %d = Rs.%d\n",
               mocha, mocha * 185);

    if (vada_pav > 0)
        printf("Vada Pav      x %d = Rs.%d\n",
               vada_pav, vada_pav * 150);

    if (veg_puff > 0)
        printf("Veg Puff      x %d = Rs.%d\n",
               veg_puff, veg_puff * 119);

    if (masala_chai > 0)
        printf("Masala Chai   x %d = Rs.%d\n",
               masala_chai, masala_chai * 125);

    if (burger > 0)
        printf("Burger        x %d = Rs.%d\n",
               burger, burger * 99);

    printf("--------------------------------\n");
    printf("Total Amount = Rs.%d\n", total);
    printf("Enter payment amount: Rs.");
    scanf("%d", &payment);

    if (payment >= total)
    {
        printf("Balance Amount = Rs.%d\n", payment - total);
        printf("Thank you! Visit again.\n");
    }
    else
    {
        printf("Insufficient payment!\n");
        printf("Amount remaining = Rs.%d\n", total - payment);
    }

    return 0;
}


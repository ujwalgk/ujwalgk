#include <stdio.h>

int main()
{
    int qty, dis = 5;
    float rate, tot;

    printf("enter the quantity and the rate please ...");
    scanf("%d %f", &qty, &rate);

    if (qty > 1000)
        dis = 12;
    tot = (qty * rate) - (qty * rate * dis / 100);

    printf("total expense is  rs.%f",tot);


    return 0;
}
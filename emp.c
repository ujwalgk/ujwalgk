#include <stdio.h>

int main()
{

    int sal, hra, da,ga ;

    printf("enter your salary ");
    scanf("%d", &sal);

    if (sal < 1500)
    {
        hra = (10 / 100)*sal;
        da = (50/ 100)*sal;

       
    }
    
      else 
      {
        hra = 500;
        da = (98 / 100) * sal;
        
    }
ga = sal+hra+da;
printf("the gross salary is %d ", ga );
    return 0;
}
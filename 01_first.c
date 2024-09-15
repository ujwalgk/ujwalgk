#include <stdio.h>

int main()

{
  int p, n;
  float r, si;

  printf("enter the values of p,n,r");
  scanf("%d %d  %f", &p, &n, &r);

  si = p * n * r / 100;

  printf(" simple intrest = Rs. %f ", si);
}
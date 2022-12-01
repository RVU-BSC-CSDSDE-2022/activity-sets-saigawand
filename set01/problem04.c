#include<stdio.h>
int main()
{
  int a, b, sum;
  printf("Enter the Values:");
  scanf("%d %d",&a, &b);
  
  sum = add(a, b);
  
  printf("Sum of %d and %d is %d",a, b, sum);
  
  return 0;
}
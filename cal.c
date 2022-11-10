#include<stdio.h>
int cal(int a, int b, char sum)
{
 if(sum == '+')
 {
 printf("Addition of two numbers is %d ", a + b);
 }
 else if(sum == '-')
 {
 printf("Subtraction of two numbers is %d ", a - b);
 }
 else if(sum == '*')
 {
 printf("Multiplication of two numbers is %d ", a * b); 
 }
 else if(sum == '/')
 {
 printf("Division of two numbers is %d ", a / b);
 }
 else
 {
 printf("Invalid operator");
 }
  }
void main()
{
 int a , b;
 char sum;

 printf("Enter First Number ");
 scanf("%d", &a);

 printf("Enter Second Number ");
 scanf("%d", &b);

 printf("Enter '+' for Add\n '-' for Sub\n '*' for Mul\n '/' for Div\n");
 scanf(" %c", &sum);

 cal(a,b,sum);

}

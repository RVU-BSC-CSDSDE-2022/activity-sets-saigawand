#include<stdio.h>
int input();
void change_to_6(int a);

int input(){
  int n;
  printf("Enter a positive integer: \n ");
  scanf("%d",&n);
  return n;

}

void change_to_6(int a){
  if (a!=6){
    printf("%d",a);
    change_to_6(a-1);
  }
  int main(){
    int a;
    a=input();
    change_to_6(a);
}
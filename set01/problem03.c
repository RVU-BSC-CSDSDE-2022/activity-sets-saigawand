#include <stdio.h>
int main()
{

	int num1, num2, result;
	printf("\nEnter the two number: ");
	scanf("%d %d", &num1, &num2);

	result = add(num1, num2);
	printf("\nSum of %d and %d is %d", num1, num2, result);

	return 0;
}

int add(int no1, int no2)
{
	int res;
	res = no1 + no2;
	return res;
}
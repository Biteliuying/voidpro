#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int addnumbers(int a, int b, int c)
{
	int sum = a + b + c;
	return sum;
}
int main()
{
	int result = addnumbers(4, 5, 6);
	printf("result=%d\n", result);
}
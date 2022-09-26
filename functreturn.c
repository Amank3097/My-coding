#include<stdio.h>
#include<conio.h>

int add(int a,int b);


int main()
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	c=add(a,b);
	printf("Sum=%d",c);
	
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

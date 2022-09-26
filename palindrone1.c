#include<stdio.h>
#include<conio.h>

int main()
{
	int n,r,sum=0,temp=0;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Palindrone number.....");
	}
	else
	{
		printf("not palindrone......");
	}
	return 0;
}

